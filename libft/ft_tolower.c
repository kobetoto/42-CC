/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 13:43:18 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/20 10:31:03 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if ((ft_isalpha(c) != 0) && (c >= 'A' && c <= 'Z'))
		return (c +32);
	else
		return (c);
}
/*
int main(int argc, char **argv)
{
	(void) argc;

	printf("ft_tolower('%s') == %c \n \n", argv[1], ft_tolower(argv[1][0]));
	printf("tolower('%s') == %c \n \n", argv[1], tolower(argv[1][0]));
}
*/
