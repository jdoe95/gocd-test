.PHONY: all
all: test-runner

.phony: build
build: module.o

.phony: test
test: test-runner

module.o: module.c module.h
	gcc -c $< -I. -o $@

main.o: main.c module.h
	gcc -c $< -I. -o $@

test-runner: main.o module.o
	gcc $^ -o $@

.phony: clean
clean:
	rm *.o test-runner
