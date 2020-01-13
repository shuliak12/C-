#include "unistd.h"

void ft_putchar(char c) {
    write(1, &c, 1);
}

int main() {
    int number = 97;
    while (number < 123) {
        ft_putchar(number);
        number++;
    }
    ft_putchar('\n');
    return (0);
}

// a = 2
// b = 4

// a < b
// a == b
// a > b
// a <= b
// b >= a