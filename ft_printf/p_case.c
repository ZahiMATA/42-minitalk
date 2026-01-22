/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_case.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <zmata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:48:54 by zmata             #+#    #+#             */
/*   Updated: 2024/12/20 14:14:20 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	p_case(long p)
{
	int	somme;

	somme = 0;
	if (p == 0)
	{
		somme += ft_putstr("(nil)");
	}
	else
	{
		somme += ft_putstr("0x");
		somme += ft_putnbr_base_p(p, "0123456789abcdef");
	}
	return (somme);
}
