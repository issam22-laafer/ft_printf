/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:55:37 by lissam            #+#    #+#             */
/*   Updated: 2023/11/26 21:01:55 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_u(unsigned int nb)
{
	int		count;
	char	*s;

	count = 0;
	s = "0123456789ABCDEF";
	if (nb >= 16)
	{
		count += ft_print_hex_u(nb / 16);
		count += ft_print_hex_u(nb % 16);
	}
	else
	{
		count += ft_putchar(s[nb]);
	}
	return (count);
}
