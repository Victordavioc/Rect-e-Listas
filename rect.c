#include "rect.h"
#include <stdlib.h>
#include <stdio.h>



Rect * rect_new(
    int x, int y,
    int w, int h,
    char color, int fill){
        Rect * r = calloc (1, sizeof(Rect));
        r->x = x;
        r->y = y;
        r->width = w;
        r->height = h;
        r->color = color;
        r->filled = fill;
        return r;
    }
void rect_free( Rect * rect){
    free(rect);
}    

void rect_print( Rect * rect){
    printf(" [%d, %d] : [%d, %d]: [color: %d]: [fill:%s]", rect->x, rect->y, rect->width, rect->height, (int) rect->color, rect->filled?"True":"False");
}