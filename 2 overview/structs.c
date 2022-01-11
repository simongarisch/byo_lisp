#include <stdio.h>


struct rectangle {
    int length;
    int width;
};


void init(struct rectangle *r, int length, int width) {
    r->length = length;
    r->width = width;
}


int area(struct rectangle r) {
    return r.length * r.width;
}


void structs() {
    puts("___STRUCTS___");
    struct rectangle r;
    int length=10, width=5;
    init(&r, length, width);
    printf(
        "The area of our rectangle with length %d and width %d is %d",
        length, width, area(r)
    );
    puts("\n");
}
