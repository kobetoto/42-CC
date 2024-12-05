/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:04:05 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/21 14:05:01 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int main (int argc, char **argv)
{
	(void) argc;

	int fd = open("testFD.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd == -1)
	{
		perror("open");
		return 1;
	}

	//printf("fd est ===== %i \n",fd);
	ft_putendl_fd(argv[1], fd);

	close(fd);

	ft_putendl_fd(argv[1], 1);
}
*/
