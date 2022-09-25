#include "../inc/Header.h"

int mx_strlen(const char *s) {
    int temp = 0;
    while (s[temp] != '\0') {
        temp++;
    }
    return temp;
}

