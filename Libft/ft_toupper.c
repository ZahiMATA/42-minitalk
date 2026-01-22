/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:16:02 by zmata             #+#    #+#             */
/*   Updated: 2024/11/13 14:44:03 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int t)
{
	if (t >= 'a' && t <= 'z')
		return (t - 32);
	return (t);
}
/*
int	main(void)
{
	int	lettre;

	lettre = 65;
	printf("%c",ft_toupper(lettre));
	return(0);
}
*/
