/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:20:07 by thodavid          #+#    #+#             */
/*   Updated: 2025/03/09 09:17:36 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	siz_dst;
	size_t	siz_src;

	i = 0;
	siz_dst = ft_strlen(dst);
	siz_src = ft_strlen(src);
	if (ft_strlen(dst) >= siz)
		return (siz_src + siz);
	while (src[i] && (siz_dst + i) < (siz - 1))
	{
		dst[siz_dst + i] = src[i];
		i++;
	}
	dst[siz_dst + i] = '\0';
	return (siz_dst + siz_src);
}
/*
int main()
{
	char src[5] = "hello";
	char dst[7] = " ,World";
	ft_strlcat(dst, src, 4);
	printf("ft_strlcat  ===%s=== \n", dst);
	printf("ft_strlcat  ===%zu=== \n", ft_strlcat(dst, src, 7));

	printf("\n");
	char src2[5] = "hello";
	char dst2[7] = " ,World";
	strlcat(dst2, src2, 4);
	printf("strlcat  ===%s=== \n", dst2);
	printf("strlcat  ===%zu=== \n", strlcat(dst2, src2, 7));

}
*/
