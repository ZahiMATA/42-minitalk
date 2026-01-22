/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmata <zmata@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:04:00 by zmata             #+#    #+#             */
/*   Updated: 2025/06/12 09:15:56 by zmata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
#include <signal.h>
#include <aio.h>
#include "ft_printf.h"
#include "libft.h"

char	g_buf[100000];

static void	gagne_ligne(int *pi)
{
	int	z;

	z = 0;
	while (z < *pi)
		write(1, &g_buf[z++], 1);
	write(1, "\n", 1);
	*pi = 0;
}

void	handler(int signum, siginfo_t *info, void *context)
{
	static int		i;
	static char		lettre;
	static int		bit_position = 7;
	static pid_t	client_pid;
	int				bite;

	(void)context;
	bite = 0;
	if (client_pid == 0 || client_pid != info->si_pid)
		client_pid = info->si_pid;
	if (signum == SIGUSR2)
		bite = 1;
	lettre |= (bite << bit_position);
	bit_position--;
	if (bit_position < 0)
	{
		g_buf[i++] = lettre;
		if (lettre == '\0')
			gagne_ligne(&i);
		bit_position = 7;
		lettre = 0;
	}
	kill(client_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_sigaction = handler;
	sa.sa_flags = SA_SIGINFO;
	sigemptyset(&sa.sa_mask);
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_printf("Bonjour, voila le PID du serveur : %d.\n", getpid());
	while (1)
		pause();
	return (0);
}
