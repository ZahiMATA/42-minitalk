/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <zmata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:58:30 by zmata             #+#    #+#             */
/*   Updated: 2025/02/05 13:45:10 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long nb)
{
	int	somme;

	somme = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		somme++;
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		somme += ft_putnbr(nb / 10);
		somme += ft_putchar(nb % 10 + '0');
	}
	else
		somme += ft_putchar(nb + '0');
	return (somme);
}
