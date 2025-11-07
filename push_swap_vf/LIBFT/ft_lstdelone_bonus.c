/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:16:39 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/26 18:49:37 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free (lst);
}
/*
int     ft_lstsize(t_list *lst)
{
	int     count;

	count = 0;
	while (lst != NULL)
	{
		count ++;
		lst = lst -> next;
	}
	return (count);
}

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

	// Suppression du premier nœud
	ft_lstdelone(n1, del);
	
	  segfault si je met un deuxiem au niveau de lstsize (lst = lst->next)??????
	ft_lstdelone(n2, del);
	

	// Taille après suppression
	printf("Taille de la liste après suppression : %d\n", ft_lstsize(n2));

	return 0;
}*/
