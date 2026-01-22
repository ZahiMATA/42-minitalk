/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:15:34 by zmata             #+#    #+#             */
/*   Updated: 2024/12/10 12:37:17 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int s)
{
	int		i;
	char	*z;

	s = (char)s;
	z = (char *)str;
	i = 0;
	while (z[i])
		i++;
	while (i >= 0)
	{
		if (z[i] == s)
			return (&z[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	int		i;
	char	chaine[];

	i = 105;
	chaine[] = "test1 i test2 i test3 i test4";
	printf("%s",ft_strrchr(chaine, i ));
	return(0);
}
*/
