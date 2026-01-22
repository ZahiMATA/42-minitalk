/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:35:18 by zmata             #+#    #+#             */
/*   Updated: 2024/11/20 15:58:21 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_fd(int nb, int fd)
{
	static int	result;

	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(fd, "-", 1);
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	result = (nb % 10) + '0';
	write(fd, &result, 1);
}
/*
int main ()
{
	int	id;
	int	nb;

	id = 1;
	nb = -28;
	ft_putnbr_fd(nb,id);
	return (0);
}
*/
