/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 14:05:18 by thodavid          #+#    #+#             */
/*   Updated: 2025/03/26 15:07:12 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_lst	*ft_get_next_min(t_lst *stack)
{
	t_lst	*hd;
	t_lst	*n_min;
	int		min_fnd;

	n_min = NULL;
	min_fnd = 0;
	hd = stack;
	if (hd != NULL)
	{
		while (hd != NULL)
		{
			if ((hd->index == -1) && (!min_fnd || hd->number < n_min->number))
			{
				n_min = hd;
				min_fnd = 1;
			}
			hd = hd->next;
		}
	}
	return (n_min);
}

void	ft_index_stack(t_lst *stack)
{
	t_lst	*head;
	int		index;

	index = 0;
	head = ft_get_next_min(stack);
	while (head != NULL)
	{
		head->index = index++;
		head = ft_get_next_min(stack);
	}
}
