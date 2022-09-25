#include "../inc/Header.h"

void mx_delete_end(int maxx, int maxy, int numbers[maxy][maxx], char symbols[maxy][maxx]) {
    for (int i = 0; i < maxx; i++) {
        if (numbers[maxy-1][i] < 0){
            mx_delete_index(maxy-1, i);
            numbers[maxy-1][i] = 0;
        }
        else if (numbers[maxy - 1][i] > 0){
            mx_to_color_index(maxy-1, i, symbols[maxy-1][i], 1);
            numbers[maxy-1][i] = 0;
        }
    }
}
