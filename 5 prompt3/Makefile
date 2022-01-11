CC = gcc
CFLAGS = -std=c99 -g -w -Wall
OFILES = prompt3.o
# https://developers.redhat.com/blog/2018/03/21/compiler-and-linker-flags-gcc


overview: $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -ledit -o prompt3


prompt2.o:
	$(CC) -c prompt3.c


clean:
	rm *.o prompt3


run:
	./prompt3
