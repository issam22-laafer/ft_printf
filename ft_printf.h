/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:42:22 by lissam            #+#    #+#             */
/*   Updated: 2023/11/26 18:24:07 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_putnbr(int nb);
int		ft_putnbr(int nb);
int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
char	*ft_strchr(const char *s, int c);
int		ft_putstr(char *str);
int		ft_print_hex(unsigned int n);
int		ft_print_hex_u(unsigned int n);
int		print_uns_dec(unsigned int n);
int		ft_print_hex_p(unsigned long nb);

#endif
