/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 08:23:20 by thodavid          #+#    #+#             */
/*   Updated: 2025/03/27 09:56:57 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_five_element_sort(t_lst **stack_a, t_lst **stack_b)
{
	int	index;
	int	size;

	size = ft_listsize(*stack_a);
	if (size <= 3)
	{
		if (size == 2 && (*stack_a)->number > (*stack_a)->next->number)
			sa(stack_a);
		else if (size == 3)
			ft_three_element_sort(stack_a);
		return ;
	}
	index = ft_find_min_position(*stack_a);
	while (index > 0)
	{
		if (index <= size / 2)
			ra(stack_a);
		else
			rra(stack_a);
		index = ft_find_min_position(*stack_a);
	}
	pb(stack_a, stack_b);
	ft_four_element_sort(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	ft_four_element_sort(t_lst **stack_a, t_lst **stack_b)
{
	int	index;

	index = ft_find_min_position(*stack_a);
	while (index > 0)
	{
		if (index <= ft_listsize(*stack_a) / 2)
			ra(stack_a);
		else
			rra(stack_a);
		index = ft_find_min_position(*stack_a);
	}
	pb(stack_a, stack_b);
	ft_three_element_sort(stack_a);
	pa(stack_a, stack_b);
}

void	ft_two_element_check(t_lst **stack_a, int size)
{
	if (size <= 1)
		return ;
	if (size == 2)
	{
		if ((*stack_a)->number > (*stack_a)->next->number)
			sa(stack_a);
		return ;
	}
}

void	ft_handle_complex_cases(t_lst **stack_a, int a, int b, int c)
{
	if (a > b && b > c)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (a > b && b < c && a > c)
		ra(stack_a);
	else if (a < b && b > c && a < c)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (a < b && b > c && a > c)
		rra(stack_a);
}

void	ft_three_element_sort(t_lst **stack_a)
{
	int	size;
	int	a;
	int	b;
	int	c;

	size = ft_listsize(*stack_a);
	ft_two_element_check(stack_a, size);
	if (size <= 2)
		return ;
	a = (*stack_a)->number;
	b = (*stack_a)->next->number;
	c = (*stack_a)->next->next->number;
	if (a > b && b < c && a < c)
		sa(stack_a);
	else
		ft_handle_complex_cases(stack_a, a, b, c);
}
