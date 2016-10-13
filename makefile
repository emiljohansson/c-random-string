all: compile run

compile:
	mkdir -p bin && gcc cli.c random-string.c -o bin/cli

run:
	 ./bin/cli
