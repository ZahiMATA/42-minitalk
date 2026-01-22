/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:03:06 by zmata             #+#    #+#             */
/*   Updated: 2024/12/10 16:29:25 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*gagne_ligne(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1 + i) - 1;
	while (j >= 0 && ft_strchr(set, s1[i + j]))
		j--;
	str = malloc(sizeof(char) * (j + 2));
	if (!str)
		return (NULL);
	while (k <= j)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;

	i = 0;
	if (0 == ft_strlen(s1))
	{
		str = malloc(sizeof(char) * (0 + 1));
		if (!str)
			return (NULL);
		str[i] = '\0';
		return (str);
	}
	if (s1[i] == 0 || set == 0)
		return (NULL);
	return (gagne_ligne(s1, set));
}
/*int	main(void)
{
	char	chaine[] = "abcdba";
	char	set[] = "acb";
	printf("%s", ft_strtrim(chaine,set));
	return (0);
}*/
