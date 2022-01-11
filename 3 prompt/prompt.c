#include <stdio.h>

// In the C programming language, static is used with global variables 
// and functions to set their scope to the containing file.
static char input[2048];


void main() {
    puts("Lispy Version 0.0.0.0.1");
    puts("Press Ctrl+c to Exit\n");

    while(1) {
        fputs("lispy> ", stdout);  // slight variation on puts which does not append a newline character
        fgets(input, 2048, stdin);
        printf("No you're a %s", input);
    }
}