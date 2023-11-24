#include "ftprintf.h"
static void print_hex(unsigned long int nb)
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
        i = 0;
        while (count > 0)
        {
                ft_putchar(array[ar[count]]);
                count--;
        }
}

void ft_print_hex(unsigned  int n)
{
        
        unsigned long int nb;
        nb = n;
        print_hex(nb);
}