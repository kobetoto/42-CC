/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:00:31 by thodavid          #+#    #+#             */
/*   Updated: 2025/03/27 09:44:30 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_lst	*ft_listlast(t_lst *head)
{
	t_lst	*tmp;

	tmp = head;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (tmp);
	}
	return (tmp);
}

t_lst	*ft_lstnew_node(int num)
{
	t_lst	*n;

	n = (t_lst *) malloc(sizeof(t_lst));
	if (!n)
		return (NULL);
	n->number = num;
	n->index = -1;
	n->next = NULL;
	return (n);
}

// Adds the specified node to a stack (list) making it the last node
void	ft_listadd_back(t_lst **stack, t_lst *new)
{
	t_lst	*n;

	if (*stack)
	{
		n = ft_listlast(*stack);
		n->next = new;
		new->next = NULL;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
}

int	ft_listsize(t_lst *lst)
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

void	ft_two_digit_sort(t_lst **stack_a)
{
	sa(stack_a);
	return ;
}
