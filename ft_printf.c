/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:00:48 by lissam            #+#    #+#             */
/*   Updated: 2023/11/21 15:01:09 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

static void type_check(char ch, va_list list)
{
	if(ch == 'c')
		ft_putchar(va_arg(list,int));
	else if(ch == 'd' || ch == 'i')
		ft_putnbr(va_arg(list,int));
	else if(ch == 's')
		ft_putstr(va_arg(list,char *));
	else if(ch == 'x')
		ft_print_hex(va_arg(list,unsigned int));
	else if(ch == 'X')
		ft_print_hex_u(va_arg(list,unsigned int));
	else if(ch == 'u')
		ft_print_hex_u(va_arg(list,unsigned int));
	
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;
	va_start(list, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if(format[i] == '\0')
				break;
			if (ft_strchr(" cspdiuxX",format[i]))
				type_check(format[i], list);
			else if (format[i] == '%')
				ft_putchar(format[i]);
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(list);
}

int main()
{
	// ft_printf("issam', 66, \n%s\n%d\n%%\n%i","gg", 15, 89);
	// ft_printf("\n==========================\n");
	// printf("issam', 66, \n%s\n%d\n%%\n%i\n","gg", 15, 89);
	ft_printf("salam : \n%s\n%d\n%i\n%x\n%c\n%X%","ana issam laafar", 5746,4039,2147483647,'c',2147483647);
	ft_printf("\n==============\n");
	printf("%c\n",'c');
}