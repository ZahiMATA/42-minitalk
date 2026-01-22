/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:15:06 by zmata             #+#    #+#             */
/*   Updated: 2024/12/02 14:00:49 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int		i;
	size_t	vs;

	i = 0;
	vs = 0;
	if (size > 0)
	{
		while ((vs < size - 1) && (src[i]))
		{
			dest[i] = src[i];
			i++;
			vs++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main (void)
{
	size_t		s;
	const char	src[];
	char		dest[10];

	s = 0;
	src[] = "coucou";
	printf("%zu",ft_strlcpy(dest, src,s));
	//printf("%zu",strlcpy(dest, src, s));
	return(0);
}
*/
