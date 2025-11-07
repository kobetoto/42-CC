/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:46:20 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/21 13:46:21 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
	// Ouvrir un fichier en écriture*
	int fd = open("testFD.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd == -1)
	{
		perror("open");
		return 1;
	}

	// Utiliser ft_putchar_fd pour écrire un char dans le fichier*
	ft_putchar_fd('x', fd);

	// Fermer le fichier*

	close(fd);

	// Écrire sur la sortie standard*

	ft_putchar_fd('x', 1);
	write(1, "\n", 1);
	return 0;
}
*/
