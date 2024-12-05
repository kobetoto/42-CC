/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:47:12 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/28 09:16:26 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s);

int	ft_set(char c, char const *s)
{
	while (*s)
	{
		if (c == *s)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	debut;
	size_t	fin;
	size_t	i;
	char	*trim_s;

	debut = 0;
	fin = ft_strlen(s1);
	i = 0;
	while (s1[debut] && ft_set(s1[debut], set))
		debut++;
	while (fin > debut && ft_set(s1[fin - 1], set))
		fin --;
	trim_s = malloc(sizeof(char) * (fin - debut + 1));
	if (trim_s == NULL)
		return (NULL);
	while (debut < fin)
	{
		trim_s[i] = s1[debut];
		i++;
		debut++;
	}
	trim_s[i] = '\0';
	return (trim_s);
}
/*
int main (int argc, char **argv)
{
	(void) argc;

	printf("s1 ===%s== \n\n set ===%s=== \n\n rslt ===%s=== \n\n",
	argv[1], argv[2],ft_strtrim(argv[1], argv[2]));
}
*/
