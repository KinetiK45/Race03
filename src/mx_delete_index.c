#include "../inc/Header.h"

void mx_delete_index(int y, int x){
    move(y, x);
    delch();
    insch(' ');
}
