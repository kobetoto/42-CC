/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 11:16:35 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/12 14:04:31 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	cc;

	i = 0;
	p = (unsigned char *)s;
	cc = (unsigned char)c;
	while (i < n)
	{
		p[i] = cc;
		i ++;
	}
	return (s);
}
/*
int main(){
	char s[4] = "KOBE";	
	printf("s is '%s'\n", s);
        
	memset(s, 1, sizeof(char)*4);
	printf("memset: s is '%s'\n", s);
        
	ft_memset(s, 1, sizeof(char)*4);
	printf("ft_memset: s is '%s'\n", s);
}
*/
