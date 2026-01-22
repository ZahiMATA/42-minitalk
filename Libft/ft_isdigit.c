/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:12:05 by zmata             #+#    #+#             */
/*   Updated: 2024/11/28 15:04:26 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int deci)
{
	if (deci >= '0' && deci <= '9')
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	chiffre;

	chiffre = 10;
	printf("pas moi > %d\n",isdigit(chiffre));
        printf("moi > %d",ft_isdigit(chiffre));
        return(0);
}
*/
