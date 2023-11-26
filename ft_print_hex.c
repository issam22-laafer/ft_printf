/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:55:53 by lissam            #+#    #+#             */
/*   Updated: 2023/11/26 16:05:52 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nb)
{
	int count;
	char *s;

	count = 0;
	s = "0123456789abcdef";
	if (nb >= 16)
	{
		count += ft_print_hex(nb / 16);
		count += ft_print_hex(nb % 16);
	}
	else
	{
		count += ft_putchar(s[nb]);
	}
	return (count);
}
