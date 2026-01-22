/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:19:13 by zmata             #+#    #+#             */
/*   Updated: 2024/12/09 11:45:09 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main ()
{
	char	chaine[];
	int		descripteur;

        chaine[] = "marche fdp";
        descripteur = 1;
        ft_putstr_fd(chaine, descripteur);
        return (0);
}
*/
