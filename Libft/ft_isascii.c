/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:05:11 by zmata             #+#    #+#             */
/*   Updated: 2024/12/10 11:51:47 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int l)
{
	if (l >= 0 && l <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	chiffre;

        chiffre = 444;
        printf("%d",ft_isascii(chiffre));
        return(0);
}
*/
