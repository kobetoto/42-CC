/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:20:00 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/20 10:30:26 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		length_src;
	int		i;

	length_src = ft_strlen(src);
	i = 0;
	dup = malloc(sizeof(char) * (length_src + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	while (i < length_src)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int main()
{
	char s[] = "hello";
	char *dup;

	dup = ft_strdup(s);
	printf("the duplicate s is '%s'\n", dup);

	return 0;

}
*/
