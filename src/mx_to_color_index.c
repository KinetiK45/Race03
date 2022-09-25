#include "../inc/Header.h"

void mx_to_color_index(int y, int x, char c, int color){
    move(y, x);
    delch();
    chtype result = c | COLOR_PAIR(color);
    insch(result);
}
