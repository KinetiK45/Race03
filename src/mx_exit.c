#include "../inc/Header.h"

void mx_exit(void) {
    if (getch() == 'q') {
    endwin();
    exit(0);
    }
}

