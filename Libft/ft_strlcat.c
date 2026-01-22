/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:27:30 by zmata             #+#    #+#             */
/*   Updated: 2024/12/02 16:00:11 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	result;
	size_t	i;
	int		k;

	k = 0;
	i = 0;
	while (dest[k])
		k++;
	result = k;
	if (result >= size)
		return (ft_strlen(src) + size);
	while ((i + result + 1 < size) && (src[i]))
	{
		dest[k] = src[i];
		i++;
		k++;
	}
	dest[k] = '\0';
	return (ft_strlen(src) + result);
}
/*
int main (int ac, char **av)
{
	char	*dest1;
	char	*dest2;

	(void)ac;
	dest1 = ft_strdup(av[1]);
	dest2 = ft_strdup(av[1]);
	printf("FT_STRLCAT :
			%zu | ",ft_strlcat(dest1,ft_strdup(av[2]),atoi(av[3])));
	printf("%s\n", dest1);
	printf("STRLCAT : %zu | ", strlcat(dest2,ft_strdup(av[2]),atoi(av[3])));
	printf("%s\n", dest2);
	return(0);
}
*/
