/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <zmata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:05:53 by zmata             #+#    #+#             */
/*   Updated: 2024/12/20 14:14:15 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nb)
{
	static int	somme;
	static int	result;

	somme = 0;
	if (nb > 9)
	{
		ft_putnbr_unsigned(nb / 10);
	}
	somme++;
	result = (nb % 10) + '0';
	write(1, &result, 1);
	return (somme);
}
