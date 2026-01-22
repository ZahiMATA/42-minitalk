/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:46:37 by zmata             #+#    #+#             */
/*   Updated: 2024/12/10 17:42:40 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	**freer(char **result, int size)
{
	while (--size >= 0)
	{
		free(result[size]);
	}
	free(result);
	return (NULL);
}

int	ft_compteur(char const *s, char c)
{
	int	cmp;
	int	i;

	i = 0;
	cmp = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			i++;
		cmp++;
	}
	if (s[i - 1] == c && i > 1)
		cmp--;
	return (cmp);
}

char	**ecrivain(char const *s, char c, int cmp, char **result)
{
	int	i;
	int	e;
	int	size;

	i = 0;
	size = 0;
	while (s[i] && size < cmp)
	{
		e = 0;
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
			result[size][e++] = s[i++];
		result[size][e] = '\0';
		size++;
	}
	result[size] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		size;
	int		e;

	result = malloc(sizeof(char *) * (ft_compteur(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	size = 0;
	while (s[i] && size < ft_compteur(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		e = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		result[size] = malloc(sizeof(char) * ((i - e) + 1));
		if (!result[size])
			return (freer(result, size));
		size++;
	}
	return (ecrivain(s, c, ft_compteur(s, c), result));
}
/*
int	main(void)
{
	const char	chaine[];
	char		c;

        chaine[] = "Tripouille sqlut";
        c = ' ';
        ft_split(chaine, c);
	return (0);
}
*/
