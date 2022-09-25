#include "../inc/Header.h"

void mx_print4(int check) {
    char *neo = {"Knock, knock, Neo"};
    for (int i = 0; neo[i] != '\0'; i++) {
        mvaddch(6, 4 + i, neo[i] | COLOR_PAIR(1));
        refresh();
        usleep(200000);
        if (check == 0) mx_exit();
        else mx_exit_all();
    }
    clear();
    refresh();
}

