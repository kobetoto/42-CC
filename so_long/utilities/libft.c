/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 12:34:42 by thodavid          #+#    #+#             */
/*   Updated: 2025/04/18 15:36:06 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/so_long.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

void	ft_error(char *str)
{
	ft_putendl_fd(str, 1);
	exit(0);
}

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		length_src;
	int		i;

	length_src = ft_strlen(src);
	i = 0;
	dup = malloc(sizeof(char) * (length_src + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	while (i < length_src)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
