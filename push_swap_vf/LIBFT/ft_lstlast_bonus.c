/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:33:09 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/26 10:39:29 by thodavid         ###   ########.fr       */
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
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst -> next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}
/*
int main ()
{

	t_list *n = malloc(sizeof(t_list));
	t_list *n2 = malloc(sizeof(t_list));
	t_list *n3 = malloc(sizeof(t_list));

	n -> content = 1;
	n -> next = n2;


	n2 -> content = 2;
	n2 -> next = n3;


	n3 -> content = 3;
	n3 -> next = NULL;



	printf("the last ele is => '%p'\n",n3);
	printf("the last ele is => '%p'\n",ft_lstlast(n));
}
*/
