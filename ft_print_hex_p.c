/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:23:37 by lissam            #+#    #+#             */
/*   Updated: 2023/11/26 18:23:46 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_p(unsigned long nb)
{
	int count;
	char *s;

	count = 0;
	s = "0123456789abcdef";
	if (nb >= 16)
	{
		count += ft_print_hex_p(nb / 16);
		count += ft_print_hex_p(nb % 16);
	}
	else
	{
		count += ft_putchar(s[nb]);
	}
	return (count);
}
