#include "../inc/Header.h"

chtype mx_char_to_white(char c){
    chtype result = c | COLOR_PAIR(2);
    return result;
}
