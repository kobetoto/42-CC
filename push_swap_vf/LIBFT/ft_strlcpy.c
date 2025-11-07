/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:07:42 by thodavid          #+#    #+#             */
/*   Updated: 2025/03/09 09:18:35 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t siz)
{
	size_t	i;

	i = 0;
	if (siz > 0)
	{
		while (i < (siz -1) && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main()
{

	char src[4] = "kobe";
	char dst[4] = "ebok";

	ft_strlcpy(dst, src, 4);
	printf("ft_strlcpy is ===%s=== \n", dst);

	char src2[4] = "kobe";
	char dst2[4] = "ebok";

	strlcpy(dst2, src2, 4);
	printf("strlcpy is ===%s=== \n", dst2);

}
*/
