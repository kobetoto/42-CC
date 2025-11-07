/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:33:09 by thodavid          #+#    #+#             */
/*   Updated: 2025/03/19 12:09:10 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

/*
typedef struct s_list
{
        int content;
        struct s_list *next;
} t_list;
*/
int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count ++;
		lst = lst -> next;
	}
	return (count);
}
/*
int main (int argc, char **argv)
{
	(void) argc;

	t_list *n = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));
	t_list *n3 = malloc(sizeof(t_list));
	n -> content = atoi(argv[1]);
	n -> next = n2;

	n2 -> content = atoi(argv[2]);
	n2 -> next = n3;


        n3 -> content = atoi(argv[3]);
        n3 -> next = NULL;




	printf("la size de list est => '%i'\n",ft_lstsize(n));
}
*/
