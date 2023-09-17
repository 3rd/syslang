SHELL     = /usr/bin/env bash
UNAME     = $(shell uname -s | tr A-Z a-z)
HOSTNAME  = $(shell hostname)
USER_HOME = ${HOME}
SOURCE    = $(realpath $(dir $(realpath $(lastword $(MAKEFILE_LIST)))))

BLACK     = $(shell tput -Txterm setaf 0)
RED       = $(shell tput -Txterm setaf 1)
GREEN     = $(shell tput -Txterm setaf 2)
YELLOW    = $(shell tput -Txterm setaf 3)
BLUE      = $(shell tput -Txterm setaf 4)
MAGENTA   = $(shell tput -Txterm setaf 5)
CYAN      = $(shell tput -Txterm setaf 6)
WHITE     = $(shell tput -Txterm setaf 7)
RESET     = $(shell tput -Txterm sgr0)

.DEFAULT_GOAL = help

help: ## help
	@grep -E '^[a-zA-Z_0-9%-]+:.*?## .*$$' $(MAKEFILE_LIST) | awk 'BEGIN {FS = ":.*?## "}; {printf "${BLUE}%-20s${RESET} %s\n", $$1, $$2}'
.PHONY: help

generate: ## generate parser
	@npm run generate
.PHONY: generate

build: ## build parser
	@npm run build
.PHONY: build

test: ## run tests
	@make generate
	@npm run test
.PHONY: test

dev: ## watch for changes and run tests
	@watchexec -e ".cc,.js,.scm,.txt" -r -c reset "make generate && make test"
.PHONY: dev

dev_filter: ## watch for development tests only
	@watchexec -e ".cc,.js,.scm,.txt" -r -c reset "make generate && tree-sitter test -f dev"
.PHONY: dev_filter

parse-spec: ## generate parser and parse the spec file
	@make generate
	@npm run parse -- spec.syslang
.PHONY: parse-spec

highlight-spec: ## generate parser and highlight the spec file
	@make generate
	@npm run highlight -- spec.syslang
.PHONY: highlight-spec

playground: ## run playground
	@tree-sitter build-wasm
	@tree-sitter web-ui
.PHONY: playground

setup: ## setup
	@tree-sitter init-config
	@echo 'Warning: Remember to setup { "parser-directories": [] }'
	@echo "tree-sitter init-config"
	@npm install
	@npm run build
.PHONY: setup
