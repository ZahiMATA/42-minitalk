/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:25:17 by zmata             #+#    #+#             */
/*   Updated: 2024/12/04 15:20:21 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include <unistd.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	p;
	size_t	i;
	int		j;

	p = 0;
	i = 0;
	j = 0;
	if (ft_strlen(s2) == 0)
		return ((char *)s1);
	while (s1[i])
	{
		p = i;
		while (s1[i] == s2[j] && i < len)
		{
			i++;
			j++;
			if (s2[j] == 0)
				return ((char *)s1 + (i - j));
		}
		j = 0;
		i = p;
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	size_t	t;
	char	to_find[10];
	char	chaine[30];

	t = -1;
	to_find[10] = "aabc";
	chaine[30] = "aaabcabcd";
	printf("moi     > %s\n",ft_strnstr(chaine,to_find,t));
	printf("pas moi > %s",strnstr(chaine,to_find,t));
	return(0);
}
*/
