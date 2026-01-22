/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:41:37 by zmata             #+#    #+#             */
/*   Updated: 2024/12/02 17:35:16 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	size_t	t;

	t = 0;
	while (t < size)
	{
		if ((*(unsigned char *)(p1 + t)) != (*(unsigned char *)(p2 + t)))
			return (*(unsigned char *)(p1 + t) - (*(unsigned char *)(p2 + t)));
		t++;
	}
	return (0);
}
/*
int	main(void)
{
	size_t	octet;
	char	chaine[];
	char	chaine1[];

	
	octet = 2;
	chaine[] = "200";
	chaine1[] = "0";
	printf("memcmp > %d  \n",memcmp(chaine,chaine1,octet));
	printf("ft memcmp > %d",ft_memcmp(chaine,chaine1,octet));
	return(0);
}
*/
