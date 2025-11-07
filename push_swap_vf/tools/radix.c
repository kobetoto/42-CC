/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 08:23:34 by thodavid          #+#    #+#             */
/*   Updated: 2025/03/27 09:44:53 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_get_max_bits(t_lst **stack)
{
	t_lst	*head;
	int		max;
	int		max_bits;

	if (*stack == NULL)
		return (0);
	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	if (max == 0)
		return (1);
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	ft_radix(t_lst **stack_a, t_lst **stack_b)
{
	t_lst	*head_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	head_a = *stack_a;
	i = 0;
	size = ft_listsize(head_a);
	max_bits = ft_get_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			if ((((*stack_a)->index >> i) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		while (ft_listsize(*stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}

int	ft_find_min_position(t_lst *stack)
{
	t_lst	*head;
	int		min;
	int		min_pos;
	int		position;

	if (!stack)
		return (-1);
	head = stack;
	min = head->number;
	min_pos = 0;
	position = 0;
	while (head)
	{
		if (head->number < min)
		{
			min = head->number;
			min_pos = position;
		}
		head = head->next;
		position++;
	}
	return (min_pos);
}
