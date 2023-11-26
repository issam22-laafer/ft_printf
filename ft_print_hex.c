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
	char	*array;
	int		ar[25];
	int		i;
	int		count;

	array = "0123456789abcdef";
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
