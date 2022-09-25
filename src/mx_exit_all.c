#include "../inc/Header.h"

void mx_exit_all(void) {
    if (getch() <= 127 && getch() >= 27) {
    endwin();
    exit(0);
    }
}

