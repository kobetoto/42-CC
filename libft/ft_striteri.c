/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 14:29:01 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/21 15:54:08 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void f(unsigned	int i, char *s)
{
	if(i)
	{
		*s = *s + 8;
		i--;
	}
}

int main(int argc, char **argv)
{
	(void) argc;
	printf("before ===%s===\n", argv[1]);

	ft_striteri(argv[1], f);

	printf("after ===%s===", argv[1]);
}
*/
