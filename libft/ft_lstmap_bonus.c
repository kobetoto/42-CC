/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 19:06:51 by thodavid          #+#    #+#             */
/*   Updated: 2024/11/29 11:48:21 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_obj;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_obj = ft_lstnew(f(lst->content));
		if (!new_obj)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_obj);
		lst = lst->next;
	}
	return (new_list);
}

/*
//x2
void *x2(void *content)
{
	int *result = malloc(sizeof(int));
	if (!result)
		return (NULL);
	*result = (*(int *)content) * 2;
	return (result);
}

//DEL
void delete_int(void *content)
{
	free(content);
}

int main()
{
	// Création LST
	t_list *list = malloc(sizeof(t_list));  // premier nœud
	list->content = malloc(sizeof(int));    // content
	list->next = NULL;                      // Initialisation du prochain pointeur
	*(int *)(list->content) = 1;

	t_list *second_node = malloc(sizeof(t_list));
	second_node->content = malloc(sizeof(int));
	second_node->next = NULL;
	*(int *)(second_node->content) = 2;

	list->next = second_node;

	t_list *third_node = malloc(sizeof(t_list));
	third_node->content = malloc(sizeof(int));
	third_node->next = NULL;
	*(int *)(third_node->content) = 3;

	second_node->next = third_node;
	
	// Application de ft_lstmap
	t_list *new_list = ft_lstmap(list, x2, delete_int);

	// Affichage des deux listes
	t_list *temp = list;
	printf("Original list:\n");
	while (temp)
	{
		printf("%d\n", *(int *)temp->content);
		temp = temp->next;
	}

	temp = new_list;
	printf("\nNew list:\n");
	while (temp)
	{
		printf("%d\n", *(int *)temp->content);
		temp = temp->next;
	}
	return 0;
}
*/
