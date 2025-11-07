/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:39:50 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/16 13:42:14 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if ((ft_isalpha(c) != 0) && (c >= 'a' && c <= 'z'))
		return (c -32);
	else
		return (c);
}
/*
int main(int argc, char **argv)
{
	(void) argc;

	printf("ft_toupper('%s') == %c \n \n", argv[1], ft_toupper(argv[1][0]));
	printf("toupper('%s') == %c \n \n", argv[1], toupper(argv[1][0]));
}
*/
