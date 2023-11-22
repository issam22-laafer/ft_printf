/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:42:22 by lissam            #+#    #+#             */
/*   Updated: 2023/11/22 14:42:24 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putnbr(int nb);
int		ft_printf(const char *format, ...);
char	*ft_strchr(const char *s, int c);

#endif