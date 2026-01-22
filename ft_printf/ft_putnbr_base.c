/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <zmata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:24:57 by zmata             #+#    #+#             */
/*   Updated: 2024/12/19 15:50:20 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(long nb, char *base)
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
	if (nb >= vrai_base)
	{
		somme++;
		ft_putnbr_base(nb / vrai_base, base);
	}
	result = base[(nb % vrai_base)];
	write(1, &result, 1);
	somme++;
	return (somme);
}
/*
int	main(void)
{
	long i;
	i = -11;
	char * c = "0123456789abcdef";
	printf("%d\n",ft_putnbr_base(i,c));
	return(0);
}*/