/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:38:50 by zmata             #+#    #+#             */
/*   Updated: 2024/12/05 11:16:50 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		z;
	char	*result;

	result = malloc(sizeof(char) * (ft_strlen(s2) + ft_strlen(s1)) + 1);
	if (!result)
		return (NULL);
	i = 0;
	z = 0;
	while (s1[z])
	{
		result[i] = s1[z];
		z++;
		i++;
	}
	z = 0;
	while (s2[z])
	{
		result[i] = s2[z];
		i++;
		z++;
	}
	result[i] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	c[] = "42";
	char	c2[] = "";

	printf("%s",ft_strjoin(c, c2));
	return (0);
*/
