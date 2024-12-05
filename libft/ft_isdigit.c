/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:16:15 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/12 17:37:35 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2408);
	else
		return (0);
}
/*
int main()
{
	printf("isdigit() ===>  %i\n", isdigit('1'));
	printf("ft_isdigit() ===>  %i\n", ft_isdigit('1'));
	printf("\n");

	printf("isdigit() ===>  %i\n", isdigit('0'));
	printf("ft_isdigit() ===>  %i\n", ft_isdigit('0'));
	printf("\n");

	printf("isdigit() ===>  %i\n", isdigit('b'));
	printf("ft_isdigit() ===>  %i\n", ft_isdigit('b'));
	printf("\n");
}
*/
