CC = gcc
CFLAGS = -std=c99 -g -w -Wall
# https://developers.redhat.com/blog/2018/03/21/compiler-and-linker-flags-gcc


hello: hello.o
	$(CC) $(CFLAGS) hello.o -o hello


hello.o:
	$(CC) -c hello.c


clean:
	rm *.o hello


run:
	./hello
