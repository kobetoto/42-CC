/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:06:25 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/29 09:07:04 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;

	if (!dst && !src)
		return (dst);
	p_dst = (unsigned char *) dst;
	p_src = (unsigned char *) src;
	while (n > 0)
	{
		*(p_dst++) = *(p_src++);
		n--;
	}
	return (dst);
}
/*
   int main()
   {
   char src[5] = "kobe";
   char dst[5] = "ebok";
   ft_memcpy(dst, src, sizeof(src));
   printf("ft_memcpy is ==%s==\n",dst);
   printf("\n");

   char src2[5] = "kobe";
   char dst2[5] = "ebok";
   memcpy(dst2, src2, sizeof(src));
   printf("memcpy is ==%s=\n",dst);
   }
   */
