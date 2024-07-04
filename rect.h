

typedef struct _rect{
    int x, y;
    int width, height;
    char color;
    int filled;
} Rect;

Rect * rect_new(
    int x, int y,
    int w, int h,
    char color, int fill);
    
void rect_free( Rect * rect );
void rect_print( Rect * rect );
    