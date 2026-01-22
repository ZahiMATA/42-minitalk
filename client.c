/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <zmata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:04:29 by zmata             #+#    #+#             */
/*   Updated: 2025/06/19 08:08:10 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_printf.h"
#include "libft.h"

static volatile sig_atomic_t	g_recu = 0;

/*
** Handler du signal SIGUSR1 (accusé de réception)
*/
void	handlerr(int sig)
{
	(void)sig;
	g_recu = 1;
}

/*
** Envoie les 8 bits de `c` au serveur, un par un
*/
void	send_char(pid_t pid, char c)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		g_recu = 0;
		if ((c >> bit) & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		while (!g_recu)
			usleep(50);
		bit--;
	}
}

/*
** Programme client : envoie un message au serveur via signaux
*/
int	main(int argc, char **argv)
{
	pid_t				pid;
	struct sigaction	sa;
	size_t				len;
	size_t				i;

	pid = ft_atoi(argv[1]);
	if (argc != 3 || pid <= 0 || argv[1][0] == '-')
		return (ft_printf("%s erreur PID invalide\n", argv[0]), 1);
	sa.sa_handler = handlerr;
	sa.sa_flags = 0;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	if (kill(pid, 0) == -1)
		return (ft_printf
			("Erreur : PID %d invalide ou inaccessible.\n", pid), 1);
	len = ft_strlen(argv[2]);
	i = 0;
	while (i <= len)
		send_char(pid, argv[2][i++]);
	return (0);
}
