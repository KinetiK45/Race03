#include "../inc/Header.h"

void mx_generate_new_lines(int maxx, int maxy, int numbers[maxy][maxx], char symbols[maxy][maxx]) {
    if (rand() % 100 > 30){
        int index = rand() % (maxx - 1);
        if (numbers[0][index] == 0){
            numbers[0][index] = 1 + rand() % (maxy - 1);
            symbols[0][index] = mx_char_generate();
            move(0, index);
            delch();
            insch(mx_char_to_white(symbols[0][index]));
        }
    }
}
