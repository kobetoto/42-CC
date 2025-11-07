/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:41:01 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/20 13:47:14 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main()
{
	char s[4] = "kobe";
	char s2[4] = "kobe";
	printf("s is %s\n\n",s);

	bzero(s, 4);
	printf("s after bzero is '%s'\n",s);
	
	ft_bzero(s2, 4);
	printf("s after ft_bzero is '%s'\n",s2);
	return 0;
}
*/
