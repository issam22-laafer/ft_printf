#include "ftprintf.h"

int ft_print_hex(unsigned  int nb)
{
        char array[] = "0123456789abcdef";
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
        while (count > 0)
        {
                ft_putchar(array[ar[count]]);
                count--;
        }
        return (count);
}