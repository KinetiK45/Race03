#ifndef MATRIX_H
#define MATRIX_H

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

chtype mx_char_to_white(char c);
char mx_char_generate(void);
void mx_delete_index(int y, int x);
void mx_to_color_index(int y, int x, char c, int color);
void mx_delete_end(int maxx, int maxy, int numbers[maxy][maxx], char symbols[maxy][maxx]);
void mx_add_symbols(int maxx, int maxy, int numbers[maxy][maxx], char symbols[maxy][maxx]);
void mx_generate_new_lines(int maxx, int maxy, int numbers[maxy][maxx], char symbols[maxy][maxx]);
void mx_matrix_rain(WINDOW *win, int check);
void mx_print_Neo(int check);
void mx_print1(int check);
void mx_print2(int check);
void mx_print3(int check);
void mx_print4(int check);
void mx_exit(void);
void mx_exit_all(void);
void mx_printerr(const char *s);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);



void mx_initialize_arr(int maxx, int maxy, int arr[maxy][maxx]);

#endif
