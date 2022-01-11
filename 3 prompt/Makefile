CC = gcc
CFLAGS = -std=c99 -g -w -Wall
OFILES = prompt.o
# https://developers.redhat.com/blog/2018/03/21/compiler-and-linker-flags-gcc


overview: $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -o prompt


prompt.o:
	$(CC) -c prompt.c


clean:
	rm *.o prompt


run:
	./prompt
