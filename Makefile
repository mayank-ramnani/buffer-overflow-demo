CC=clang
CFLAGS=-g -Wall -O2 -D_FORTIFY_SOURCE=3
# CFLAGS=-g -Wall 

all: demo

demo: main.c
	$(CC) $(CFLAGS) -o demo main.c

clean:
	rm demo
