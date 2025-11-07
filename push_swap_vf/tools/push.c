/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 10:41:48 by thodavid          #+#    #+#             */
/*   Updated: 2025/03/24 10:52:33 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	push(t_lst **stack_dst, t_lst **stack_src)
{
	t_lst	*tmp;
	t_lst	*head_dst;
	t_lst	*head_src;

	if (ft_listsize(*stack_src) == 0)
		return (-1);
	head_dst = *stack_dst;
	head_src = *stack_src;
	tmp = head_src;
	head_src = head_src->next;
	*stack_src = head_src;
	if (!head_dst)
	{
		head_dst = tmp;
		head_dst->next = NULL;
		*stack_dst = head_dst;
	}
	else
	{
		tmp->next = head_dst;
		*stack_dst = tmp;
	}
	return (0);
}

int	pa(t_lst **stack_a, t_lst **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_lst **stack_a, t_lst **stack_b)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}
