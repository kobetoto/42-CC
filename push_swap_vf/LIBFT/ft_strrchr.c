/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:02:56 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/25 08:50:13 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int main(int argc, char **argv)
{
	(void) argc;

	char *ft_s = ft_strrchr(argv[1], 'o');
	char *s = strrchr(argv[1], 'o');

	printf("le pointeur ft_s ===%s===\n\n",ft_s);
	printf("le pointeur s ===%s===\n\n",s);

}
*/
