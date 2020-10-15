.PHONY: all
all: test-runner

test-runner:
	gcc module.c main.c -o $@ -I.
