
#include "ftprintf.h"

int print_uns_dec(unsigned int n)
{
    int count;

    count = 0;
    if (n >= 10)
        count += print_uns_dec(n / 10);
    count += ft_putchar('0' + (n % 10));
    return count;
}