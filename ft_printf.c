/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:00:48 by lissam            #+#    #+#             */
/*   Updated: 2023/11/26 17:06:46 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	type_check(char ch, va_list list)
{
	int	count;

	count = 0;
	if (ch == 'c')
		count += ft_putchar(va_arg(list, int));
	else if (ch == 'd' || ch == 'i')
		count += ft_putnbr(va_arg(list, int));
	else if (ch == 's')
		count += ft_putstr(va_arg(list, char *));
	else if (ch == 'x')
		count += ft_print_hex(va_arg(list, unsigned int));
	else if (ch == 'X')
		count += ft_print_hex_u(va_arg(list, unsigned int));
	else if (ch == 'u')
		count += print_uns_dec(va_arg(list, unsigned int));
	else if (ch == 'p')
	{
		count += ft_putstr("0x");
		count += ft_print_hex_p(va_arg(list, unsigned long));
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	list;
	int		i;
	int		count;

	va_start(list, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break ;
			if (ft_strchr("cspdiuxX", format[i]))
				count += type_check(format[i], list);
			else if (format[i] == '%')
				count += ft_putchar(format[i]);
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	va_end(list);
	return (count);
}
