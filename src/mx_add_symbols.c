#include "../inc/Header.h"

void mx_add_symbols(int maxx, int maxy, int numbers[maxy][maxx], char symbols[maxy][maxx]) {
    for (int i = maxy - 2 ; i >= 0; i--) {
        for (int j = maxx - 1; j >= 0; j--) {
            if (numbers[i][j] > 1 && i - numbers[i][j] >= 0){
                numbers[i - numbers[i][j]][j] = - numbers[i][j];
            }
            if (numbers[i][j] > 0 && numbers[i+1][j] == 0){
                mx_to_color_index(i, j, symbols[i][j], 1);
                numbers[i+1][j] = numbers[i][j];
                numbers[i][j] = 0;
                symbols[i+1][j] = mx_char_generate();
                move(i + 1, j);
                delch();
                insch(mx_char_to_white(symbols[i+1][j]));
            }
            if (numbers[i][j] < 0){
                numbers[i+1][j] = numbers[i][j];
                numbers[i][j] = 0;
                mx_delete_index(i, j);
            }
        }
    }
}
