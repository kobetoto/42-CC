/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:34:20 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/29 10:24:39 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;
	size_t			i;

	i = 0;
	if (n == 0 || dest == src)
		return (dest);
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	if (p_dest > p_src && p_dest < p_src + n)
	{
		while (n--)
			p_dest[n] = p_src[n];
	}
	else
	{
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	return (dest);
}
/*
int main ()
{
	char memory[10]= "ABCDEFGHI";
	char memory2[10]= "ABCDEFGHI";
       
       	// Afficher  memoire
        printf("Avant ft_memcpy:\n");
        printf("memory = '%s'\n", memory2);


        // Test avec ft_memcpy
        ft_memcpy(memory2 + 4, memory2, 6);

        // Afficher memoire apres ft_memcpy
        printf("\nAprès ft_memcpy:\n");
        printf("memory = '%s'\n\n\n", memory2);

	// Afficher  memoire
	printf("Avant ft_memmove:\n");
	printf("memoire = '%s'\n", memory);

	// Test avec chevauchement (source à l'intérieur de destination)
	ft_memmove(memory + 4, memory, 6);


	// Afficher memoire apres ft_memmove
	printf("\nAprès ft_memmove (chevauchement):\n");
	printf("buffer = '%s'\n", memory);

	return 0;
}
*/
