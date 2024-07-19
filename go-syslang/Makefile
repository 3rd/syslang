SHELL := bash
.ONESHELL:
.SHELLFLAGS := -eu -o pipefail -c
.DELETE_ON_ERROR:
MAKEFLAGS += --warn-undefined-variables
MAKEFLAGS += --no-builtin-rules

# .RECIPEPREFIX = >

.DEFAULT_GOAL := help
.PHONY := help test watch cover
.DELETE_ON_ERROR:

help: ## help
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | sort | awk 'BEGIN {FS=":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'
	
dev: ## watch for changes and run tests
	watchexec --restart --clear --exts go -- "go test -count=1 ./..."

xxx: ## dev: temp dev
	watchexec -e go -r -c "make build && ./go-syslang"

test: ## run tests
	go test ./...

build: ## build
	go build .

clean: ## clean
	go clean -cache -testcache

install: ## install
	go install .

bench: ## run benchmarks
	go test -bench=./... -benchmem

cover: ## run tests and show coverage
	go test -coverprofile=coverage.out
	go tool cover -func=coverage.out
	rm coverage.out

cpu: ## pprof
	go test -cpuprofile cpu.prof -bench ./...
	go tool pprof -http=":8081" cpu.prof

mem: ## pprof
	go test -memprofile mem.prof -bench ./...
	go tool pprof -http=":8081" mem.prof



