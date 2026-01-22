/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:45:08 by zmata             #+#    #+#             */
/*   Updated: 2024/11/28 16:04:37 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int t)
{
	if (t >= 'A' && t <= 'Z')
		return (t + 32);
	return (t);
}
/*
int	main(void)
{
        int     lettre;

        lettre = 65;
        printf("%c",ft_toupper(lettre));
        return(0);
}
*/
