/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:43:00 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/13 11:26:45 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
#include "libft.h" 

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) + ft_isdigit(c)) == 0)
		return (0);
	else
		return (8);
}
/*
int main()
{
	printf("isalnum() ===>  %i\n", isalnum('1'));
	printf("ft_isalnum() ===>  %i\n", ft_isalnum('1'));
printf("\n");
	printf("isalnum() ===>  %i\n", isalpha('A'));
	printf("ft_isalnum() ===>  %i\n", ft_isalnum('A'));

printf("\n");
	printf("isalnum() ===>  %i\n", isalpha(42));
	printf("ft_isalnum() ===>  %i\n",ft_isalnum(42));

printf("\n");
	printf("isalnum() ===>  %i\n", isalnum('z'));
	printf("ft_isalnum() ===>  %i\n", ft_isalnum('z'));

printf("\n");
	printf("isalnum() ===>  %i\n", isalnum(46));
	printf("ft_isalnum() ===>  %i\n", ft_isalnum(46));
}
*/
