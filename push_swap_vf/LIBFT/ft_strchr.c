/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:47:43 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/25 08:47:21 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}
/*
   int main(int argc, char **argv)
   {
   (void) argc;

   char *ft_s = ft_strchr(argv[1], argv[2][0]);
   char *s = strchr(argv[1], argv[2][0]);

   printf("le pointeur ft_s ===%s===\n\n",ft_s);
   printf("le pointeur s ===%s===\n\n",s);
}
*/
