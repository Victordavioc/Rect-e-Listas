
#include <stdio.h>
#include "rect.h"

int main(){
    Rect * r1 = rect_new(
        10, 10,
        20, 50,
        127, 1
        );
    rect_print(r1);
    rect_free(r1);
    
    return 0;
}

