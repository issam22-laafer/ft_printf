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
			if (ft_strchr("cspdiuxX", format[i]))
				return ;
			else if (format[i] == '%')
				ft_putchar(format[i]);
		}
		else
		{
			ft_putchar(format[i]);
		}
	}
}
