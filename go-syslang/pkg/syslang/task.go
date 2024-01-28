package syslang

import (
	"strings"
	"time"

	"github.com/3rd/syslang/go-syslang/internal/treesitter"
)

type TaskStatus int

const (
	TaskStatusDefault TaskStatus = iota
	TaskStatusActive
	TaskStatusDone
	TaskStatusCancelled
)

func (status TaskStatus) String() string {
	switch status {
	case TaskStatusDefault:
		return "default"
	case TaskStatusActive:
		return "active"
	case TaskStatusDone:
		return "done"
	case TaskStatusCancelled:
		return "cancelled"
	default:
		panic("unknown task status")
	}
}

type TaskSession struct {
	Start time.Time
	End   *time.Time
	Line  uint32
}

func NewTaskSessionFromStr(startDateStr, startTimeStr string, endDateStr, endTimeStr *string) *TaskSession {
	session := TaskSession{
		Start: parseDateTime(startDateStr, &startTimeStr),
	}

	if endDateStr != nil && endTimeStr != nil {
		value := parseDateTime(*endDateStr, endTimeStr)
		session.End = &value
	} else if endDateStr != nil {
		value := parseDateTime(*endDateStr, nil)
		session.End = &value
	} else if endTimeStr != nil {
		value := parseDateTime(startDateStr, endTimeStr)
		session.End = &value
	}

	if session.End != nil && session.End.Before(session.Start) {
		panic("TaskSession end time is before start time " + session.Start.Format("2006.01.02 15:04") + " - " + session.End.Format("2006.01.02 15:04"))
	}

	return &session
}

func (session TaskSession) Duration() time.Duration {
	if session.End == nil {
		return time.Since(session.Start)
	}
	return session.End.Sub(session.Start)
}

func (session TaskSession) IsInProgress(atTime ...time.Time) bool {
	if len(atTime) > 1 {
		panic("IsInProgress takes at most one argument")
	}
	if len(atTime) == 1 {
		return session.Start.Before(atTime[0]) && (session.End == nil || session.End.After(atTime[0]))
	}
	return session.End == nil
}

type TaskSchedule struct {
	Start time.Time
	End   *time.Time
	Line  uint32
}

func NewTaskScheduleFromStr(startDateStr string, startTimeStr, endDateStr, endTimeStr *string) TaskSchedule {
	schedule := TaskSchedule{
		Start: parseDateTime(startDateStr, startTimeStr),
	}

	if endDateStr != nil && endTimeStr != nil {
		value := parseDateTime(*endDateStr, endTimeStr)
		schedule.End = &value
	} else if endDateStr != nil {
		value := parseDateTime(*endDateStr, nil)
		schedule.End = &value
	} else if endTimeStr != nil {
		value := parseDateTime(startDateStr, endTimeStr)
		schedule.End = &value
	}

	if schedule.End != nil && schedule.End.Before(schedule.Start) {
		panic("TaskSchedule end time is before start time")
	}

	return schedule
}

func (schedule TaskSchedule) Duration() time.Duration {
	if schedule.End == nil {
		return 0
	}
	return schedule.End.Sub(schedule.Start)
}

func (schedule TaskSchedule) IsInProgress(atTime ...time.Time) bool {
	if len(atTime) != 1 {
		panic("TaskSchedule.IsInProgress requires the atTime argument")
	}
	// between start and end
	if schedule.End != nil && schedule.Start.Before(atTime[0]) && schedule.End.After(atTime[0]) {
		return true
	}
	// same day, after start, no end
	if schedule.Start.Day() == atTime[0].Day() && schedule.End == nil && schedule.Start.Before(atTime[0]) {
		return true
	}
	return false
}

type Task struct {
	Line     uint32
	Status   TaskStatus
	Title    string
	Body     string
	Sessions []TaskSession
	Schedule *TaskSchedule
}

func (task Task) IsInProgress(atTime ...time.Time) bool {
	if len(atTime) > 1 {
		panic("IsInProgress takes at most one argument")
	}
	// sessions
	for _, session := range task.Sessions {
		if session.IsInProgress(atTime...) {
			return true
		}
	}
	// schedule
	if len(atTime) == 1 && task.Schedule != nil {
		return task.Schedule.IsInProgress(atTime...)
	}
	return false
}

func (task Task) TotalSessionDuration() time.Duration {
	var duration time.Duration
	for _, session := range task.Sessions {
		duration += session.Duration()
	}
	return duration
}

func (task Task) GetLastSession() *TaskSession {
	if len(task.Sessions) == 0 {
		return nil
	}
	return &task.Sessions[len(task.Sessions)-1]
}

func QueryTasks(document Document) []Task {
	tasks := []Task{}

	defaultTasks := queryTasksWithStatus(document, `
    (task_default
      (text_line) @title
      (task_schedule)* @schedule
      (task_session)* @session
    )`,
		TaskStatusDefault)
	activeTasks := queryTasksWithStatus(document, `
    (task_active
      (text_line) @title
      (task_schedule)* @schedule
      (task_session)* @session
    )`,
		TaskStatusActive)
	doneTasks := queryTasksWithStatus(document, `
    (task_done
      (text_to_eol) @title
      (task_schedule)* @schedule
      (task_session)* @session
    )`,
		TaskStatusDone)
	cancelledTasks := queryTasksWithStatus(document, `
    (task_cancelled
      (text_to_eol) @title
      (task_schedule)* @schedule
      (task_session)* @session
    )`,
		TaskStatusCancelled)

	tasks = append(tasks, defaultTasks...)
	tasks = append(tasks, activeTasks...)
	tasks = append(tasks, doneTasks...)
	tasks = append(tasks, cancelledTasks...)

	return tasks
}

func parseDateTime(dateStr string, timeStr *string) time.Time {
	dateLayout := "2006.01.02"
	resultDate, err := time.ParseInLocation(dateLayout, dateStr, time.Local)
	if err != nil {
		dateLayout = "2006/01/02"
		resultDate, err = time.ParseInLocation(dateLayout, dateStr, time.Local)
		if err != nil {
			dateLayout = "2006-01-02"
			resultDate, err = time.ParseInLocation(dateLayout, dateStr, time.Local)
			if err != nil {
				panic(err)
			}
		}
	}
	if timeStr != nil {
		resultTime, err := time.ParseInLocation("15:04", *timeStr, time.Local)
		if err != nil {
			panic(err)
		}
		resultDate = time.Date(resultDate.Year(), resultDate.Month(), resultDate.Day(), resultTime.Hour(), resultTime.Minute(), 0, 0, resultDate.Location())
	}
	return resultDate
}

func queryTasksWithStatus(document Document, queryString string, status TaskStatus) []Task {
	tasks := []Task{}

	cursor := treesitter.Query(document.tree.RootNode(), queryString)

	for {
		taskMatch, _ := cursor.NextMatch()
		if taskMatch == nil {
			break
		}

		task := Task{
			Status: status,
		}

		// title
		title := taskMatch.Captures[0].Node.Content([]byte(document.source))
		task.Title = strings.TrimRight(title, "\n")

		// position
		line := taskMatch.Captures[0].Node.StartPoint().Row
		task.Line = line

		// content
		for _, capture := range taskMatch.Captures[1:] {

			// sessions
			if capture.Node.Type() == "task_session" {
				var session *TaskSession

				// Session: 2006.01.02 15:04 - 2006.01.03 15:04 (task_session (datetimerange (datetime (date) (time)) (datetime (date) (time))))
				match := treesitter.QueryOne(capture.Node, `
          (task_session
          (datetimerange
            (datetime (date) @start_date (time) @start_time)
            (datetime (date) @end_date (time) @end_time)
          ))`)
				if match != nil {
					startDateString := match.Captures[0].Node.Content([]byte(document.source))
					startTimeString := match.Captures[1].Node.Content([]byte(document.source))
					endDateString := match.Captures[2].Node.Content([]byte(document.source))
					endTimeString := match.Captures[3].Node.Content([]byte(document.source))

					parsedSession := NewTaskSessionFromStr(startDateString, startTimeString, &endDateString, &endTimeString)
					parsedSession.Line = match.Captures[0].Node.StartPoint().Row
					session = parsedSession
				}

				// Session: 2006.01.02 15:04 - 16:05 (task_session (datetimerange (datetime (date) (time)) (time)))
				match = treesitter.QueryOne(capture.Node, `
          (task_session (datetimerange
            (datetime (date) @start_date (time) @start_time)
            (time) @end_time
          ))`)
				if session == nil && match != nil {
					startDateString := match.Captures[0].Node.Content([]byte(document.source))
					startTimeString := match.Captures[1].Node.Content([]byte(document.source))
					endTimeString := match.Captures[2].Node.Content([]byte(document.source))

					parsedSession := NewTaskSessionFromStr(startDateString, startTimeString, nil, &endTimeString)
					parsedSession.Line = match.Captures[0].Node.StartPoint().Row
					session = parsedSession
				}

				// Session: 2006.01.02 15:04 (task_session (datetime (date) (time)))
				match = treesitter.QueryOne(capture.Node, `
          (task_session (datetime
            (date) @start_date
            (time) @start_time
          ))`)
				if session == nil && match != nil {
					startDateString := match.Captures[0].Node.Content([]byte(document.source))
					startTimeString := match.Captures[1].Node.Content([]byte(document.source))

					parsedSession := NewTaskSessionFromStr(startDateString, startTimeString, nil, nil)
					parsedSession.Line = match.Captures[0].Node.StartPoint().Row
					session = parsedSession
				}

				if session != nil {
					task.Sessions = append(task.Sessions, *session)
				}
			}

			// schedule
			if capture.Node.Type() == "task_schedule" {
				var schedule *TaskSchedule

				// Schedule: 2006.01.02 15:04 - 2006.01.03 15:04
				match := treesitter.QueryOne(capture.Node, `
          (task_schedule
            (datetimerange
              (datetime (date) @start_date (time) @start_time)
              (datetime (date) @end_date (time) @end_time)
            )
          )`)
				if schedule == nil && match != nil {
					startDateString := match.Captures[0].Node.Content([]byte(document.source))
					startTimeString := match.Captures[1].Node.Content([]byte(document.source))
					endDateString := match.Captures[2].Node.Content([]byte(document.source))
					endTimeString := match.Captures[3].Node.Content([]byte(document.source))

					parsedSchedule := NewTaskScheduleFromStr(startDateString, &startTimeString, &endDateString, &endTimeString)
					parsedSchedule.Line = match.Captures[0].Node.StartPoint().Row
					schedule = &parsedSchedule
				}

				// Schedule: 2006.01.02 15:04 - 16:05
				match = treesitter.QueryOne(capture.Node, `
				      (task_schedule
				        (datetimerange
				          (datetime (date) @start_date (time) @start_time)
				          (time) @end_time
				        )
				      )`)
				if schedule == nil && match != nil {
					startDateString := match.Captures[0].Node.Content([]byte(document.source))
					startTimeString := match.Captures[1].Node.Content([]byte(document.source))
					endTimeString := match.Captures[2].Node.Content([]byte(document.source))

					// pp.Println("start date string", startDateString)
					// pp.Println("start time string", startTimeString)
					// pp.Println("end time string", endTimeString)

					parsedSchedule := NewTaskScheduleFromStr(startDateString, &startTimeString, nil, &endTimeString)
					parsedSchedule.Line = match.Captures[0].Node.StartPoint().Row
					schedule = &parsedSchedule
				}

				// Schedule: 2006.01.02 15:04
				match = treesitter.QueryOne(capture.Node, `(task_schedule (datetime (date) @start_date (time) @start_time))`)
				if schedule == nil && match != nil {
					startDateString := match.Captures[0].Node.Content([]byte(document.source))
					startTimeString := match.Captures[1].Node.Content([]byte(document.source))

					parsedSchedule := NewTaskScheduleFromStr(startDateString, &startTimeString, nil, nil)
					schedule = &parsedSchedule
				}

				// Schedule: 2006.01.02
				match = treesitter.QueryOne(capture.Node, `(task_schedule (date) @start_date)`)
				if match != nil {
					startDateString := match.Captures[0].Node.Content([]byte(document.source))

					parsedSchedule := NewTaskScheduleFromStr(startDateString, nil, nil, nil)
					parsedSchedule.Line = match.Captures[0].Node.StartPoint().Row
					schedule = &parsedSchedule
				}

				task.Schedule = schedule
			}
		}

		tasks = append(tasks, task)
	}

	return tasks
}
