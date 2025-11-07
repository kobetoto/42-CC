/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:53:17 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/20 14:23:41 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*p;
	size_t		bytes;

	bytes = nmemb * size;
	p = malloc(bytes);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, bytes);
	return (p);
}
/*
int main() {
    
    int i = 0;
    int * pointer = (int *) calloc( 10, sizeof(int) );

    if(pointer == NULL )
            printf("NULL\n");

    while (i < 9)
    {
		    pointer[i] = i;
		    i++;
    }

    i = 0;
    while (i<10) 
    {
        printf( "%d ", pointer[i] );
	i++;
    }
    printf( "\n" );

    free( pointer );

    int y = 0;
    int * ft_pointer = (int *) ft_calloc( 10, sizeof(int) );

    if(ft_pointer == NULL )
            printf("NULL\n");

    while (y < 9)
    {
                   ft_pointer[y] = y;
                    y++;
    }

    y = 0;
    while (y<10)
    {
        printf( "%d ", ft_pointer[y] );
        y++;
    }
    printf( "\n" );

    free( ft_pointer );


    return 0;
}
*/
