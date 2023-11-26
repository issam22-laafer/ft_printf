/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:13:06 by lissam            #+#    #+#             */
/*   Updated: 2023/11/26 17:10:42 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	length_int(long int c)
{
	int	i;

	i = 1;
	if (c < 0)
	{
		i = i + 1;
		c = -c;
	}
	while (c / 10)
	{
		i++;
		c = c / 10;
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	long	nbr;

	nbr = (long)nb;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
	else
	{
		ft_putchar(nb + '0');
	}
	return (length_int(nbr));
}
