/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:26:18 by thodavid          #+#    #+#             */
/*   Updated: 2025/03/24 10:39:23 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	swap(t_lst **stack)
{
	t_lst	*head;
	t_lst	*next;
	int		tmp_num;
	int		tmp_index;

	if (ft_listsize(*stack) < 2)
		return (-1);
	head = *stack;
	if (!head)
		ft_error("Error (swap)");
	next = head->next;
	if (!next)
		ft_error("Error (swap)");
	tmp_num = head->number;
	tmp_index = head->index;
	head->number = next->number;
	head->index = next->index;
	next->number = tmp_num;
	next->index = tmp_index;
	return (0);
}

int	sa(t_lst **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_putendl_fd("sa", 1);
	return (0);
}

int	sb(t_lst **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(t_lst **stack_a, t_lst **stack_b)
{
	if ((ft_listsize(*stack_a) < 2) || (ft_listsize(*stack_b) < 2))
		return (1);
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
	return (0);
}
/*
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
*/
