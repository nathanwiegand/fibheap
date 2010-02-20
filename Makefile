SHELL=bash
CC=gcc
CFLAGS=-Wall -pedantic -g

OBJS=fibheap.o

all: test-fib

fibheap.o: fibheap.c fibheap.h
	$(CC) $(CFLAGS) -c $<

test-fib: test-fib.c fibheap.o
	$(CC) $(CFLAGS) $(OBJS) -o $@ $<

run: test-fib
	./test-fib

clean:
	rm test-fib $(OBJS)
