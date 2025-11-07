/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:44:34 by thodavid          #+#    #+#             */
/*   Updated: 2025/03/26 16:52:38 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	reverse(t_lst **stack)
{
	t_lst	*head;
	t_lst	*last;

	if (ft_listsize(*stack) < 2)
		return (-1);
	head = *stack;
	last = ft_listlast(head);
	while (head)
	{
		if (head->next && head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	last->next = *stack;
	*stack = last;
	return (0);
}

int	rra(t_lst **stack_a)
{
	if (reverse(stack_a) == -1)
		return (-1);
	ft_putendl_fd("rra", 1);
	return (0);
}

int	rrb(t_lst **stack_b)
{
	if (reverse(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	rrr(t_lst **stack_a, t_lst **stack_b)
{
	if ((ft_listsize(*stack_a) < 2) || (ft_listsize(*stack_b) < 2))
		return (-1);
	reverse(stack_a);
	reverse(stack_b);
	ft_putendl_fd("rrr", 1);
	return (0);
}
