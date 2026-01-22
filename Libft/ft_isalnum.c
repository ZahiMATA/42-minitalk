/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:14:33 by zmata             #+#    #+#             */
/*   Updated: 2024/11/12 16:59:19 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int l)
{
	char	carac;

	carac = l;
	if (((carac >= 65 && carac <= 90) || (carac >= 97 && carac <= 122))
		|| (carac >= 48 && carac <= 57))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	chiffre;

        chiffre = 10;
        printf("%d",ft_isalnum(chiffre));
        return(0);
}

*/
