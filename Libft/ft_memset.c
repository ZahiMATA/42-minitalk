/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 09:28:22 by zmata             #+#    #+#             */
/*   Updated: 2024/11/13 10:53:40 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *point, int valeur, size_t count)
{
	size_t			i;
	unsigned char	*dest;

	dest = point;
	i = 0;
	while (i < count)
	{
		dest[i] = valeur;
		i++;
	}
	return (point);
}
/*
int	main(void)
{
	char	tab[10];

	
	printf("%u",ft_memset(tab,0,5));
	printf("%u",memset(tab,0,5));
	return (0);
}
*/
