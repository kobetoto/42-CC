/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:10:36 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/18 10:55:49 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	total_len;
	char			*s_join;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	s_join = malloc(sizeof(char) * total_len +1);
	if (s_join == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		s_join[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s_join[i] = s2[j];
		i++;
		j++;
	}
	s_join[i] = '\0';
	return (s_join);
}
/*
int main(int argc, char **argv)
{
	(void) argc;
	printf("ft_strjoin ===%s===",ft_strjoin(argv[1],argv[2]));
}
*/
