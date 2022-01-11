#include <stdio.h>


int add(int x, int y) {
    int result = x + y;
    return result;
}


void functions() {
    puts("___FUNCTIONS___");
    printf("add(7,3) is %d", add(7, 3));
    puts("\n");
}
