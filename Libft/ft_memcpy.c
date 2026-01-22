/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:56:31 by zmata             #+#    #+#             */
/*   Updated: 2024/12/10 12:23:09 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	*ft_memcpy(void *dest, const void *s, size_t size)
{
	size_t			i;
	unsigned char	*tab;
	const char		*tab2;

	if (!s && !dest)
		return (NULL);
	tab = dest;
	tab2 = s;
	i = 0;
	while (i < size)
	{
		tab[i] = tab2[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	tab[];
	char	test[10];
	size_t	t;
	char	*reponds;

	tab[] = "je suis soule";
	
	t = 5;	
	reponds = (char *)ft_memcpy( test, tab, t);
	printf("%s",reponds);
	return(0);
}
*/
