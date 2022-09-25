#include "../inc/Header.h"

int main(int argc, char *argv[]) {
    if (argc != 1 && argc != 2) {
        mx_printerr("usage: ./matrix_rain [-s]\n");
        exit(0);
    }
    else if (argc == 2 && mx_strcmp(argv[1], "-s") != 0) {
        mx_printerr("usage: ./matrix_rain [-s]\n");
        exit(0);
    }
    int check = 1;
    if (argc == 1) check = 0;
    srand(time(NULL));
    WINDOW *win = initscr();
    curs_set(false);
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_WHITE, COLOR_BLACK);
    attron(COLOR_PAIRS);
    bkgdset(COLOR_PAIR(1));
    noecho();
    mx_print_Neo(check);
    mx_matrix_rain(win, check);
    delwin(win);
    endwin();
    return 0;
}
