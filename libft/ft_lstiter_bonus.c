/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:19:14 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/27 19:42:50 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (tmp != NULL)
	{
		f(tmp -> content);
		tmp = tmp -> next;
	}
}
/*
   void f(void *content)
   {
   printf("&content in F ==%p==\n\n",content);
   }

   int main(int argc, char **argv)
   {

   (void) argc;

// Création des nœuds
t_list *n1 = malloc(sizeof(t_list));
t_list *n2 = malloc(sizeof(t_list));
t_list *n3 = malloc(sizeof(t_list));

// Allocation dynamique pour les contenus
n1->content = malloc(sizeof(int));
n2->content = malloc(sizeof(int));
n3->content = malloc(sizeof(int));

// Remplissage des contenus
 *(int *)(n1->content) = atoi(argv[1]);
 *(int *)(n2->content) = atoi(argv[2]);
 *(int *)(n3->content) = atoi(argv[3]);

// Chainage des nœuds
n1->next = n2;
n2->next = n3;
n3->next = NULL;


printf("contnent de n1 ==%i==\n", *(int *)(n1->content));
printf("contnent de n2 ==%i==\n", *(int *)(n2->content));
printf("contnent de n3 ==%i==\n\n", *(int *)(n3->content));

ft_lstiter(n1,f);


printf("contnent de n1 ==%i==\n", *(int *)(n1->content));
printf("contnent de n2 ==%i==\n", *(int *)(n2->content));
printf("contnent de n3 ==%i==\n", *(int *)(n3->content));
return 0;
}
*/
