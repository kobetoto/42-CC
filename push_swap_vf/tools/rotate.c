/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:43:17 by thodavid          #+#    #+#             */
/*   Updated: 2025/03/24 10:54:33 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	rotate(t_lst **stack)
{
	t_lst	*head;
	t_lst	*last;

	if (ft_listsize(*stack) < 2)
		return (-1);
	head = *stack;
	last = ft_listlast(head);
	*stack = head->next;
	head->next = NULL;
	last->next = head;
	return (0);
}

int	ra(t_lst **stack_a)
{
	if (rotate(stack_a) == -1)
		return (-1);
	ft_putendl_fd("ra", 1);
	return (0);
}

int	rb(t_lst **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

int	rr(t_lst **stack_a, t_lst **stack_b)
{
	if ((ft_listsize(*stack_a) < 2) || (ft_listsize(*stack_b) < 2))
		return (-1);
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
	return (0);
}
