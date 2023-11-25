#include "ftprintf.h"

int ft_print_hex_u(unsigned  int nb)
{
        char array[] = "0123456789ABCDEF";
        int ar[25];
        int i;
        int count;

        i = 0;
        count = 0;
        while (nb)
        {
                i++;
                count++;
                ar[i] = nb % 16;
                nb = nb / 16;
        }
        while (i > 0)
        {
                ft_putchar(array[ar[i]]);
                i--;
        }
        return (count);
}