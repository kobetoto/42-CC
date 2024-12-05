/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:18:13 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/12 17:13:41 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	else
		return (0);
}
/*
int main()
{
	printf("isalfa() ===>  %i\n", isalpha('1'));
	printf("ft_isalfa() ===>  %i\n", ft_isalpha('1'));

	printf("isalfa() ===>  %i\n", isalpha('A'));
	printf("ft_isalfa() ===>  %i\n", ft_isalpha('A'));

	printf("isalfa() ===>  %i\n", isalpha(42));
	printf("ft_isalfa() ===>  %i\n",ft_isalpha(42));

	printf("isalfa() ===>  %i\n", isalpha('z'));
	printf("ft_isalfa() ===>  %i\n", ft_isalpha('z'));
}
*/
