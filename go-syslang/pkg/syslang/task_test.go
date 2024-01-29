package syslang

import (
	"testing"
	"time"

	"github.com/stretchr/testify/assert"
	"github.com/stretchr/testify/suite"
)

var (
	startDate = "2006-01-02"
	startTime = "15:04"
	endDate   = "2006-01-03"
	endTime   = "16:04"
)

type SyslangTestSuite struct {
	suite.Suite
}

func TestSyslangTestSuite(t *testing.T) {
	suite.Run(t, new(SyslangTestSuite))
}

func (s *SyslangTestSuite) formatLocalRFC3339(date, timeStr string) string {
	location, err := time.LoadLocation("Local") // Replace with appropriate time zone if needed
	if err != nil {
		s.T().Fatal(err)
	}
	layout := "2006-01-02T15:04:05"
	t, err := time.ParseInLocation(layout, date+"T"+timeStr+":00", location)
	if err != nil {
		s.T().Fatal(err)
	}
	return t.In(location).Format(time.RFC3339)
}

func (s *SyslangTestSuite) TestQueryTasks() {
	document, err := NewDocument(`
* Tasks
  [ ] Default
  [-] Active
    Schedule: 2006.01.02
  [-] Active and in progress
    Schedule: 2006-01-02 15:04
    Session: 2006.01.02 15:04
  [x] Done
    Schedule: 2006/01/02 15:04 - 16:04
    Session: 2006-01-02 15:04 - 2006.01.03 15:04
    Session: 2006/01/04 15:04 - 16:04
  [_] Cancelled
    Schedule: 2006.01.02 15:04 - 2006.01.03 15:04
`)
	assert.Nil(s.T(), err)

	tasks := QueryTasks(*document)
	assert.Equal(s.T(), 5, len(tasks))

	// default
	assert.Equal(s.T(), "Default", tasks[0].Title)
	assert.Equal(s.T(), TaskStatusDefault, tasks[0].Status)
	assert.Equal(s.T(), false, tasks[3].IsInProgress())
	assert.Equal(s.T(), 0, len(tasks[0].Sessions))
	assert.Equal(s.T(), 0*time.Second, tasks[0].TotalSessionDuration())
	assert.Nil(s.T(), tasks[0].Schedule)

	// active
	assert.Equal(s.T(), "Active", tasks[1].Title)
	assert.Equal(s.T(), TaskStatusActive, tasks[1].Status)
	assert.Equal(s.T(), false, tasks[3].IsInProgress())
	assert.Equal(s.T(), 0, len(tasks[1].Sessions))
	assert.Equal(s.T(), 0*time.Second, tasks[0].TotalSessionDuration())
	assert.NotNil(s.T(), tasks[1].Schedule)
	assert.Equal(s.T(), startDate, tasks[1].Schedule.Start.Format("2006-01-02"))

	// in progress
	assert.Equal(s.T(), "Active and in progress", tasks[2].Title)
	assert.Equal(s.T(), TaskStatusActive, tasks[2].Status)
	assert.Equal(s.T(), true, tasks[2].IsInProgress())
	assert.Equal(s.T(), 1, len(tasks[2].Sessions))
	assert.Equal(s.T(), "2006.01.02 15:04", tasks[2].Sessions[0].Start.Format("2006.01.02 15:04"))
	assert.Nil(s.T(), tasks[2].Sessions[0].End)
	assert.InDelta(s.T(), time.Since(tasks[2].Sessions[0].Start).Seconds(), tasks[2].TotalSessionDuration().Seconds(), 1)
	assert.NotNil(s.T(), tasks[2].Schedule)
	assert.Equal(s.T(), startDate, tasks[2].Schedule.Start.Format("2006-01-02"))
	assert.Equal(s.T(), startTime, tasks[2].Schedule.Start.Format("15:04"))
	assert.Nil(s.T(), tasks[2].Schedule.End)

	// done
	assert.Equal(s.T(), "Done", tasks[3].Title)
	assert.Equal(s.T(), TaskStatusDone, tasks[3].Status)
	assert.Equal(s.T(), false, tasks[3].IsInProgress())
	assert.Equal(s.T(), 2, len(tasks[3].Sessions))
	assert.Equal(s.T(), "2006.01.02 15:04", tasks[3].Sessions[0].Start.Format("2006.01.02 15:04"))
	assert.Equal(s.T(), "2006.01.03 15:04", tasks[3].Sessions[0].End.Format("2006.01.02 15:04"))
	assert.Equal(s.T(), "2006.01.04 15:04", tasks[3].Sessions[1].Start.Format("2006.01.02 15:04"))
	assert.Equal(s.T(), "2006.01.04 16:04", tasks[3].Sessions[1].End.Format("2006.01.02 15:04"))
	assert.Equal(s.T(), 25*time.Hour, tasks[3].TotalSessionDuration())
	assert.NotNil(s.T(), tasks[3].Schedule)
	assert.Equal(s.T(), "2006.01.02 15:04", tasks[3].Schedule.Start.Format("2006.01.02 15:04"))
	assert.Equal(s.T(), "2006.01.02 16:04", tasks[3].Schedule.End.Format("2006.01.02 15:04"))

	// cancelled
	assert.Equal(s.T(), "Cancelled", tasks[4].Title)
	assert.Equal(s.T(), TaskStatusCancelled, tasks[4].Status)
	assert.Equal(s.T(), false, tasks[4].IsInProgress())
	assert.Equal(s.T(), 0, len(tasks[4].Sessions))
	assert.Equal(s.T(), 0*time.Second, tasks[4].TotalSessionDuration())
	assert.NotNil(s.T(), tasks[4].Schedule)
	assert.Equal(s.T(), "2006.01.02 15:04", tasks[4].Schedule.Start.Format("2006.01.02 15:04"))
	assert.Equal(s.T(), "2006.01.03 15:04", tasks[4].Schedule.End.Format("2006.01.02 15:04"))
}

func (s *SyslangTestSuite) TestNewTaskSessionFromStr() {
	// start date, start time, end date, end time
	session := NewTaskSessionFromStr(startDate, startTime, &endDate, &endTime)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), session.Start.Format(time.RFC3339))
	assert.NotNil(s.T(), session.End)
	assert.Equal(s.T(), s.formatLocalRFC3339(endDate, endTime), session.End.Format(time.RFC3339))

	// start date, start time, end date, nil
	session = NewTaskSessionFromStr(startDate, startTime, nil, &endTime)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), session.Start.Format(time.RFC3339))
	assert.NotNil(s.T(), session.End)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), session.Start.Format(time.RFC3339))

	// start date, start time, end date, nil
	session = NewTaskSessionFromStr(startDate, startTime, &endDate, nil)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), session.Start.Format(time.RFC3339))
	assert.NotNil(s.T(), session.End)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), session.Start.Format(time.RFC3339))

	// start date, start time, nil, end time
	session = NewTaskSessionFromStr(startDate, startTime, nil, &endTime)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), session.Start.Format(time.RFC3339))
	assert.NotNil(s.T(), session.End)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), session.Start.Format(time.RFC3339))

	// start date, start time, nil, nil
	session = NewTaskSessionFromStr(startDate, startTime, nil, nil)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), session.Start.Format(time.RFC3339))
	assert.Nil(s.T(), session.End)
}

func (s *SyslangTestSuite) TestTaskSessionDuration() {
	// ended session
	session := NewTaskSessionFromStr(startDate, startTime, &endDate, &endTime)
	duration := session.Duration()
	assert.Equal(s.T(), 25*time.Hour, duration)

	// in progress session
	session = NewTaskSessionFromStr(startDate, startTime, nil, nil)
	duration = session.Duration()
	assert.InDelta(s.T(), time.Since(session.Start).Seconds(), duration.Seconds(), 1)
}

func (s *SyslangTestSuite) TestNewTaskScheduleFromStr() {
	// start date, start time, end date, end time
	schedule := NewTaskScheduleFromStr(startDate, &startTime, &endDate, &endTime)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), schedule.Start.Format(time.RFC3339))
	assert.NotNil(s.T(), schedule.End)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), schedule.Start.Format(time.RFC3339))

	// start date, start time, end date, nil
	schedule = NewTaskScheduleFromStr(startDate, &startTime, nil, &endTime)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), schedule.Start.Format(time.RFC3339))
	assert.NotNil(s.T(), schedule.End)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), schedule.Start.Format(time.RFC3339))

	// start date, start time, end date, nil
	schedule = NewTaskScheduleFromStr(startDate, &startTime, &endDate, nil)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), schedule.Start.Format(time.RFC3339))
	assert.NotNil(s.T(), schedule.End)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), schedule.Start.Format(time.RFC3339))

	// start date, start time, nil, end time
	schedule = NewTaskScheduleFromStr(startDate, &startTime, nil, &endTime)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), schedule.Start.Format(time.RFC3339))
	assert.NotNil(s.T(), schedule.End)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), schedule.Start.Format(time.RFC3339))

	// start date, start time, nil, nil
	schedule = NewTaskScheduleFromStr(startDate, &startTime, nil, nil)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, startTime), schedule.Start.Format(time.RFC3339))
	assert.Nil(s.T(), schedule.End)

	// start date, nil, nil, nil
	schedule = NewTaskScheduleFromStr(startDate, nil, nil, nil)
	assert.Equal(s.T(), s.formatLocalRFC3339(startDate, "00:00"), schedule.Start.Format(time.RFC3339))
	assert.Nil(s.T(), schedule.End)
}

func (s *SyslangTestSuite) TestTaskScheduleDuration() {
	// start date, start time, end date, end time
	schedule := NewTaskScheduleFromStr(startDate, &startTime, &endDate, &endTime)
	duration := schedule.Duration()
	assert.Equal(s.T(), 25*time.Hour, duration)

	// start date, start time, nil, end time
	schedule = NewTaskScheduleFromStr(startDate, &startTime, nil, &endTime)
	duration = schedule.Duration()
	assert.Equal(s.T(), 1*time.Hour, duration)

	// start date, start time, nil, nil
	schedule = NewTaskScheduleFromStr(startDate, &startTime, nil, nil)
	duration = schedule.Duration()
	assert.Equal(s.T(), 0*time.Second, duration)

	// start date, nil, nil, nil
	schedule = NewTaskScheduleFromStr(startDate, nil, nil, nil)
	duration = schedule.Duration()
	assert.Equal(s.T(), 0*time.Second, duration)
}

func (s *SyslangTestSuite) TestTaskScheduleRecurrence() {
	cases := []struct {
		notation string
		expected string
	}{
		{"@daily", "daily"},
		{"@[*/*/*]", "*/*/*"},
	}

	for _, c := range cases {
		source := `
[ ] task
  Schedule: 2020-01-01 00:00` + c.notation
		document, err := NewDocument(source)
		assert.Nil(s.T(), err)

		tasks := QueryTasks(*document)
		assert.Equal(s.T(), 1, len(tasks))
		assert.Equal(s.T(), c.expected, tasks[0].Schedule.Repeat)
	}
}

func (s *SyslangTestSuite) TestTaskComplete() {
	cases := []struct {
		source      string
		completions []TaskCompletion
	}{
		{
			source: `
[ ] task
  Done: 2020-01-01 00:00
  Done: 2020-01-01 02:00
`,
			completions: []TaskCompletion{
				NewTaskCompletionFromStr("2020-01-01", "00:00"),
				NewTaskCompletionFromStr("2020-01-01", "02:00"),
			},
		},
	}

	for _, c := range cases {
		document, err := NewDocument(c.source)
		assert.Nil(s.T(), err)

		tasks := QueryTasks(*document)
		assert.Equal(s.T(), 1, len(tasks))
		assert.Equal(s.T(), c.completions, tasks[0].Completions)
	}
}
