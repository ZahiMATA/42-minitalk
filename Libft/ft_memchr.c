/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:25:59 by zmata             #+#    #+#             */
/*   Updated: 2024/12/09 17:02:25 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *c, int h, size_t size)
{
	size_t			i;
	unsigned char	*t;
	unsigned char	p;

	if (size == 0)
		return (NULL);
	i = 0;
	t = (unsigned char *)c;
	p = h;
	while ((i < size))
	{
		if (t[i] == p)
			return (t + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	int		i;
	size_t	t;
	char	s[];
	char	*ptr2;
	char	*ptr;

	i = 2 + 256;
	t = 3;
	s[] = {0, 1, 2 ,3 ,4 ,5};
	printf("1:%s\n", s + 2);
	//char *chaine = "test test i test";
	ptr = ft_memchr(s, 2 + 256, 3);
	ptr = ft_memchr(s, 2 + 256, 3);
	printf("pas moi >%s \n",ptr);
	printf("moi malheuresement  > %si ",ptr);
	return(0);
}
*/
