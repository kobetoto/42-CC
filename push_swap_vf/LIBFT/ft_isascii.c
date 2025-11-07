/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:28:26 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/20 14:13:45 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int main()
{
	printf("isascii() ===>  %i\n", isascii(0));
	printf("ft_isascii() ===>  %i\n", ft_isascii(0));
printf("\n");

        printf("isascii() ===>  %i\n", isascii(2147483647));
        printf("ft_isascii() ===>  %i\n", ft_isascii(2147483647));
printf("\n");

        printf("isascii() ===>  %i\n", isascii('A'));
        printf("ft_isascii() ===>  %i\n", ft_isascii('A'));
printf("\n");

        printf("isascii() ===>  %i\n", isascii(-42));
        printf("ft_isascii() ===>  %i\n", ft_isascii(-42));
printf("\n");

}
*/
