CC = gcc
CFLAGS = -std=c99 -g -w -Wall
OFILES = parsing.o mpc.o
# https://developers.redhat.com/blog/2018/03/21/compiler-and-linker-flags-gcc


overview: $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -ledit -o parsing


parsing.o:
	$(CC) -c parsing.c


mpc.o:
	$(CC) -c mpc.c


clean:
	rm *.o parsing


run:
	./parsing
