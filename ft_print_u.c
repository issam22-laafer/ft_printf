/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:56:11 by lissam            #+#    #+#             */
/*   Updated: 2023/11/26 15:56:17 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_uns_dec(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += print_uns_dec(n / 10);
	count += ft_putchar('0' + (n % 10));
	return (count);
}
