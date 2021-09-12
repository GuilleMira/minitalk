/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0server.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilmira <guilmira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 13:47:35 by guilmira          #+#    #+#             */
/*   Updated: 2021/09/11 16:57:15 by guilmira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

//tienes dos señales, usar biario.

/* if (SIGUSR1)
{
	conviertela en 0
}

if (SIGUSR2)
{
	conviertela en 1
} */

void ft_server(void)
{
	pid_t signal;
	int signal_conver;
	signal = getpid();
	signal_conver = (int) signal;
	printf("%i\n", signal_conver);
	while (1)
	{
		printf("durmiendo\n");
		sleep(2);
	}
}
