/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:49:31 by zmata             #+#    #+#             */
/*   Updated: 2024/12/09 16:58:54 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int s)
{
	char	*z;
	int		k;
	int		i;

	k = 0;
	while (str[k])
		k++;
	z = (char *)str;
	i = 0;
	while (i <= k)
	{
		if (z[i] == (char)s)
			return (&z[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	int		i;
	char	chaine[];

	i = 't' + 256;
	chaine[] = "tripouille";
	printf("moi > %s\n",ft_strchr(chaine, i ));
	printf("toi > %s",strchr(chaine, i ));
	return(0);
}
*/
