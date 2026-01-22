/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <zmata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:51:05 by zmata             #+#    #+#             */
/*   Updated: 2024/12/20 14:12:01 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_p(unsigned long nb, char *base)
{
	static int	somme;
	char		result;
	int			vrai_base;

	somme = 0;
	vrai_base = ft_strlen(base);
	if (nb < 0)
	{
		nb = nb * -1;
		somme++;
	}
	if (nb >= (unsigned long)vrai_base)
	{
		somme++;
		ft_putnbr_base_p(nb / vrai_base, base);
	}
	result = base[(nb % vrai_base)];
	write(1, &result, 1);
	somme++;
	return (somme);
}
