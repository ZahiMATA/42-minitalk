/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:46:09 by zmata             #+#    #+#             */
/*   Updated: 2024/12/10 11:52:35 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int l)
{
	if (l >= 32 && l <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	chiffre;

        chiffre = 128;
        printf("%d",ft_isprint(chiffre));
	printf("%d",isprint(chiffre));
        return(0);
}
*/
