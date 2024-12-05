/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:44:41 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/27 20:02:14 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (fd < 0)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			write(fd, "2147483648", 10);
			return ;
		}
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd((n / 10), fd);
	c = (n % 10) + '0';
	ft_putchar_fd(c, fd);
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
        ft_putnbr_fd(42, fd);

        // Fermer le fichier*

        close(fd);

        // Écrire sur la sortie standard*

        ft_putnbr_fd(42, 1);
        write(1, "\n", 1);
        return 0;
}
*/
