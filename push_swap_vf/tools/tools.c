/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 08:20:34 by thodavid          #+#    #+#             */
/*   Updated: 2025/03/27 09:44:25 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(char *str)
{
	ft_putendl_fd(str, 1);
	exit(0);
}

void	ft_free_tab(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
		i++;
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

void	ft_free_stack(t_lst **stack)
{
	t_lst	*head;
	t_lst	*tmp;

	if (stack == NULL || *stack == NULL)
		return ;
	head = *stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	*stack = NULL;
}

int	ft_is_sort(t_lst *stack)
{
	t_lst	*head;

	head = stack;
	while (head && head->next)
	{
		if (head->number > head->next->number)
			return (0);
		head = head->next;
	}
	return (1);
}

long	ft_atol_check(const char *nptr)
{
	int			i;
	int			s;
	long		r;

	i = 0;
	r = 0;
	s = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			s = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		r = (r * 10) + (nptr[i] - '0');
		if ((s == 1 && r > 2147483647) || ((s == (-1)) && ((-r) < -2147483648)))
			return (2147483648);
		i++;
	}
	return (r * s);
}
