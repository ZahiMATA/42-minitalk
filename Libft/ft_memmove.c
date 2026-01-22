/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:39:22 by zmata             #+#    #+#             */
/*   Updated: 2024/11/28 13:49:31 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	char	*dest;
	char	*src;
	size_t	i;

	if (!destination && !source)
		return (NULL);
	dest = (char *)destination;
	src = (char *)source;
	i = -1;
	if (dest > src)
	{
		while (size > 0)
		{
			size--;
			dest[size] = src[size];
		}
	}
	else
	{
		while (++i < size)
			dest[i] = src[i];
	}
	return (destination);
}
/*
int	main(void)
{
	char	tab[20];
	size_t	t;
	char	*reponds;

	tab[20] = "je suis soule";
	//char		test[10];
	
	t = 10;	
	reponds = (char *)ft_memmove( tab + 5, tab, t);
	printf("%s",tab);
	return(0);
}
*/
