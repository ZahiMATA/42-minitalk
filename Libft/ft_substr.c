/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:27:01 by zmata             #+#    #+#             */
/*   Updated: 2024/12/04 16:46:49 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*chaine;

	if (!s)
		return (NULL);
	if (len > (ft_strlen(s) - start))
		len = (ft_strlen(s) - start);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	chaine = malloc(sizeof(char) * len + 1);
	if (!chaine)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		chaine[i] = s[start];
		i++;
		start++;
	}
	chaine[i] = '\0';
	return (chaine);
}
/*
int	main(void)
{
	int		st;
	size_t	si;

	char tab[] ="testa";
	st = 3;
	si = 8;
	printf("%s", ft_substr(tab,st,si));
	return (0);
}
*/
