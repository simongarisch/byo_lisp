// gcc -std=c99 -Wall prompt2.c -ledit -o prompt2
// https://cygwin.com/packages/summary/libedit-src.html
// install package(s): libedit-debuginfo, libedit-devel, libedit0
#include <stdio.h>
#include <stdlib.h>
#include <editline/readline.h>


int main() {
    puts("Lispy Version 0.0.0.0.1");
    puts("Press Ctrl+c to Exit\n");

    while(1) {
        char* input = readline("lispy> ");
        add_history(input);
        printf("No you're a %s\n", input);
        free(input);
    }

    return 0;
}