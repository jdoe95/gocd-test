.PHONY: all
all: test-runner

.phony: build
build: module.o

.phony: test
test: test-runner

module.o: module.c module.h
	gcc -c -o $@ $^ -I.

main.o: main.c module.h
	gcc -c -o $@ $^ -I.

test-runner: main.o module.o
	gcc -o $@ $^

