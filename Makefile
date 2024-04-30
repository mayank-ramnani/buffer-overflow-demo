CC=clang
CFLAGS=-g -Wall

all: demo

demo: main.c
	$(CC) $(CFLAGS) -o demo main.c

clean:
	rm demo
	rm -r demo.dSYM
