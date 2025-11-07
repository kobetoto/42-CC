/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:38:33 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/27 19:22:56 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
   typedef struct s_list
   {
   int	content;
   struct s_list *next;
   }	t_list;
   */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last = *lst;
		while (last -> next != NULL)
		{
			last = last -> next;
		}
		last -> next = new;
	}
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
   }
   */
