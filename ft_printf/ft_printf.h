/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <zmata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:14:19 by zmata             #+#    #+#             */
/*   Updated: 2025/02/05 13:24:50 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_putnbr_base_p(unsigned long nb, char *base);
int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putnbr(long nb);
int	ft_putstr(char *s);
int	ft_putnbr_unsigned(unsigned int nb);
int	ft_putnbr_base(long nb, char *base);
int	ft_strlen(const char *str);
int	p_case(long p);

#endif
