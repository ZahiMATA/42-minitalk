/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:27:13 by zmata             #+#    #+#             */
/*   Updated: 2024/12/10 12:29:49 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		z;
	size_t	t;

	t = 0;
	z = 0;
	i = 0;
	while ((t != n) && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] == (unsigned char)s2[z])
		{
			i++;
			z++;
		}
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[z]);
		t++;
	}
	return (0);
}
/*
int	main(void)
{
	size_t	t;
	char	chaine[];
	char	chaine1[];

	t = 0;
	chaine[] = "t";
	chaine1[] = "";
	printf("moi > %d\n",ft_strncmp(chaine, chaine1,t));
	printf("lui > %d",strncmp(chaine, chaine1,t));
	return(0);
}
*/
