#include <string.h>

#include "keyboard.h"

int main(int argc, const char *argv[]) {
    start_keyboard();


    char ch = readchar_keyboard();
    printf("%c", ch);

    stop_keyboard();

    return 0;
}
