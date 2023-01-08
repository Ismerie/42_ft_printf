/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igeorge <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 15:37:13 by igeorge           #+#    #+#             */
/*   Updated: 2021/11/14 15:37:13 by igeorge          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *str, ...);
void	ft_putnbr_base(unsigned int nbr, int *size, char c);
void	ft_putnbr(int n, int *size);
void	ft_putnbr_long(unsigned long nbr, int *size);
void	ft_putnbr_long_base(unsigned long nbr, int *size);

#endif
