CC = gcc
CFLAGS = -std=c99 -g -w -Wall
OFILES = prompt2.o
# https://developers.redhat.com/blog/2018/03/21/compiler-and-linker-flags-gcc


overview: $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -ledit -o prompt2


prompt2.o:
	$(CC) -c prompt2.c


clean:
	rm *.o prompt2


run:
	./prompt2
