#include "../inc/Header.h"

void mx_matrix_rain(WINDOW *win, int check){
    int speed = 3;
    int maxx = getmaxx(win);
    int maxy = getmaxy(win);
    int numbers[maxy][maxx];
    char symbols[maxy][maxx];
    mx_initialize_arr(maxy, maxx, numbers);
    bkgdset(COLOR_PAIR(1));
    while (true) {
        halfdelay(speed);
        mx_delete_end(maxx, maxy, numbers, symbols);
        mx_add_symbols(maxx, maxy, numbers, symbols);
        mx_generate_new_lines(maxx, maxy, numbers, symbols);
        refresh();
        char c = getch();
        if (c == 'q') break;
        else if (c == '+' && speed > 1) speed--;
        else if (c == '-') speed++;
        else if (c == 'c') clear();
        if (check == 0) mx_exit();
        else mx_exit_all();
    }
}
