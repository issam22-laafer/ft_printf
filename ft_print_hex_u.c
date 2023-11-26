/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:55:37 by lissam            #+#    #+#             */
/*   Updated: 2023/11/26 17:01:48 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_u(unsigned int nb)
{
	char	*array;
	int		ar[25];
	int		i;
	int		count;

	i = 0;
	array = "0123456789ABCDEF";
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
