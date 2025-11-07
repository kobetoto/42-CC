/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 07:38:13 by thodavid          #+#    #+#             */
/*   Updated: 2025/03/27 09:33:50 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_stack(t_lst **stack_a, t_lst **stack_b)
{
	int	size;

	size = ft_listsize(*stack_a);
	if (size <= 1)
		return ;
	if (size == 2)
	{
		ft_two_digit_sort(stack_a);
		return ;
	}
	if (size == 3)
	{
		ft_three_element_sort(stack_a);
		return ;
	}
	if (size <= 5)
	{
		ft_five_element_sort(stack_a, stack_b);
		return ;
	}
	ft_radix(stack_a, stack_b);
}

/*
// 1 PARRSING   :::: [OK]
// 2 INIT       :::: [OK]
// 3 IF SORT    :::: [OK]
// 4 SORT STACK :::: [OK]
// 5 FREE STACK :::: [OK]
*/
char	**ft_create_args_arr(int ac, char **av)
{
	char	**args_arr;
	int		i;

	i = 0;
	if (ac == 1)
		exit(0);
	else if (ac == 2)
	{
		args_arr = ft_split(av[1], ' ');
		if (args_arr == NULL)
			ft_error("ft_split Error");
	}
	else
		args_arr = &av[1];
	return (args_arr);
}

int	main(int ac, char **av)
{
	char		**args_arr;
	t_lst		*stack_a;
	t_lst		*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	args_arr = ft_create_args_arr(ac, av);
	ft_check_args(args_arr, ac);
	ft_init_stack(&stack_a, args_arr, ac);
	if (ac == 2)
		ft_free_tab(args_arr);
	if (ft_is_sort(stack_a))
	{
		ft_free_stack(&stack_a);
		ft_free_stack(&stack_b);
		return (0);
	}
	ft_sort_stack(&stack_a, &stack_b);
	ft_free_stack(&stack_a);
	ft_free_stack(&stack_b);
	return (0);
}
