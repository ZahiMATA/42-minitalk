/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:34:36 by zmata             #+#    #+#             */
/*   Updated: 2024/12/11 11:38:10 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t c, size_t s)
{
	size_t	i;
	char	*tab;

	i = 0;
	if (s != 0 && s > -1 / s)
		return (NULL);
	tab = malloc(sizeof(char) * (s * c));
	if (!tab)
		return (NULL);
	while (i < c * s)
	{
		tab[i] = 0;
		i++;
	}
	return ((char *)tab);
}
/*
int	main(void)
{
	size_t	count;
	size_t	size;

	count = 8;
	size = 8;
	printf("%p",ft_calloc(count,size));
	return(0);
}
*/
