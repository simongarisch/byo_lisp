CC = gcc
CFLAGS = -std=c99 -g -w -Wall
OFILES = overview.o variables.o functions.o structs.o pointers.o
# https://developers.redhat.com/blog/2018/03/21/compiler-and-linker-flags-gcc


overview: $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o overview


overview.o:
	$(CC) -c overview.c


variables.o:
	$(CC) -c variables.c


functions.o:
	$(CC) -c functions.c


structs.o:
	$(CC) -c structs.c


pointers.o:
	$(CC) -c pointers.c


clean:
	rm *.o overview


run:
	./overview
