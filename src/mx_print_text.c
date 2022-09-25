#include "../inc/Header.h"

void mx_print_Neo(int check) {
    halfdelay(2);
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    mx_print1(check);
    mx_print2(check);
    mx_print3(check);
    mx_print4(check);
    endwin();
}


