/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 08:37:23 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/20 14:23:09 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len
			&& big[i + j] != '\0'
			&& little[j] != '\0'
			&& big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *p;

	p = ft_strnstr(largestring, smallstring, 7);

	printf("ft_strnstr return : ==%s==\n\n",p);
}
*/
