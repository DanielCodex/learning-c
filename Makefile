CC=gcc
CFLAGS=-Wall -g

# all what ever you want
first: ex1
	./ex1

.PHONY: clean
clean:
	rm -rf ex1

