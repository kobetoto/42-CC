/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:11:04 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/20 14:22:43 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	i = 0;
	tmp_s1 = (unsigned char *) s1;
	tmp_s2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if ((tmp_s1[i] - tmp_s2[i]) != 0)
			return (tmp_s1[i] - tmp_s2[i]);
		i++;
	}
	return (0);
}
/*
int main ()
{
	char s1[4] = "KOBE";
	char s2[4] = "KOBE";

	printf("rslt ft_mem ==> %i \n\n", ft_memcmp(s1, s2, 4));
	printf("rslt mem ==> %i \n\n", memcmp(s1, s2, 4));
}
*/
