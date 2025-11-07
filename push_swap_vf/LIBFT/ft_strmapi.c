/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:56:56 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/25 09:44:54 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char					*rslt;
	unsigned int			i;

	i = 0;
	if (!s || !f)
		return (NULL);
	rslt = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!rslt)
		return (NULL);
	while (s[i])
	{
		rslt[i] = f(i, s[i]);
		i++;
	}
	rslt[i] = '\0';
	return (rslt);
}
/*
char	f(unsigned	int i, char c)
{
	i = 0;
	while(i < 3)
	{
		c = c + 3;
		i ++;
	}
	return (c);
}
int main(int argc, char **argv)
{
	(void) argc;
	printf("before ===%s===\n", argv[1]);

	printf("after ===%s===", ft_strmapi(argv[1], f));
}
*/
