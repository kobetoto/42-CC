/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 08:20:00 by thodavid          #+#    #+#             */
/*   Updated: 2025/03/27 09:37:24 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_check_args(char **av, int ac)
{
	int		i;
	int		flag;
	long	tmp;

	i = 0;
	flag = 0;
	while (av[i])
	{
		tmp = ft_atol_check(av[i]);
		if (!ft_isnum(av[i]))
			flag = 1;
		if (ft_doublon(tmp, av, i))
			flag = 1;
		if (tmp < -2147483648 || tmp > 2147483647)
			flag = 1;
		if (flag == 1)
		{
			if (ac == 2)
				ft_free_tab(av);
			ft_error("Error");
		}
		i++;
	}
}

void	ft_init_stack(t_lst **stack, char **av, int ac)
{
	int		i;
	t_lst	*new;

	i = 0;
	while (av[i])
	{
		new = ft_lstnew_node(ft_atoi(av[i]));
		if (new == NULL)
		{
			ft_free_stack(stack);
			if (ac == 2)
				ft_free_tab(av);
			ft_error("NewNode allocation failed!");
		}
		ft_listadd_back(stack, new);
		i++;
	}
	ft_index_stack(*stack);
}

int	ft_doublon(int num, char **arg, int i)
{
	i++;
	while (arg[i])
	{
		if (ft_atol_check(arg[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

int	ft_isnum(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '-')
		i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
