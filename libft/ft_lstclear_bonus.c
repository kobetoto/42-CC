/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:56:02 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/30 14:30:42 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
/*
void del(void *content)
{
	free(content);
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

	// Taille initiale de la liste
	printf("Taille de la liste avant suppression : %d\n", ft_lstsize(n1));

	// Suppression de la list
	ft_lstclear(&n1, del);

	// Taille après suppression
	printf("Taille de la liste après suppression : %d\n", ft_lstsize(n1));

	//verrification *lst = NULL
	if (!n1)
		printf("list == NULL \n");
	else
		printf("test is not good\n");

	return 0;
}
*/
