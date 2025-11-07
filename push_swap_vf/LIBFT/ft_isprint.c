/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:41:55 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/19 17:53:45 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
   int main(int argc, char **argv)
   {
   (void) argc;

   printf("ft_isprint ===%i===\n\n", ft_isprint(argv[1][0]));
   printf("isprint ===%i===\n\n", isprint(argv[1][0]));

   }
   */
