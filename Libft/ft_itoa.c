/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 11:50:07 by zmata             #+#    #+#             */
/*   Updated: 2024/12/10 16:38:10 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	ft_putnbr(long nb, char *chaine, int signe)
{
	static int	i;
	char		result;

	i = 0;
	if (signe == -1)
	{
		chaine[i] = '-';
		i++;
		nb = nb * -1;
	}
	if (nb < 0)
	{
		nb = nb * -1;
	}
	if (nb > 9)
	{
		i++;
		ft_putnbr(nb / 10, chaine, signe);
	}
	result = (nb % 10) + '0';
	chaine[i++] = result;
}

char	*ft_itoa(int n)
{
	char	*chaine;
	int		stock;
	long	nbis;
	int		signe;

	signe = 1;
	stock = 1;
	nbis = n;
	if (n < 0)
	{
		nbis = nbis * -1;
		signe = -1;
		stock++;
	}
	while (nbis > 9)
	{
		nbis = nbis / 10;
		stock++;
	}
	chaine = malloc(sizeof(char) * (stock + 1));
	if (!chaine)
		return (NULL);
	ft_putnbr(n, chaine, signe);
	chaine[stock] = '\0';
	return (chaine);
}
/*int	main(void)
{
	int	i = -1234;
	printf("%s",ft_itoa(i));
	return (0);
}*/
