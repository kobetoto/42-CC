/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 14:44:51 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/20 14:22:09 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *) s;
	while (i < n)
	{
		if (p[i] == (unsigned char )c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
/*
   int main()
   {
   char s[4] = "KOBE";

   void *ft_mem = ft_memchr(s, 'B', 4);
   void *mem = memchr(s, 'B', 4);

   printf("ft_mem ===%p=== \n\n", ft_mem);
   printf("mem ===%p=== \n\n", mem);
   }
*/
