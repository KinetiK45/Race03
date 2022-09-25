#include "../inc/Header.h"

void mx_initialize_arr(int maxx, int maxy, int arr[maxy][maxx]){
    for (int i = 0; i < maxy; i++)
        for (int j = 0; j < maxx; j++)
            arr[i][j] = 0;
}
