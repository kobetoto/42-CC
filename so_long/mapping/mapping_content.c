/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 11:25:15 by thodavid          #+#    #+#             */
/*   Updated: 2025/04/18 15:36:02 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/so_long.h"

void	ft_check_map_content(char **map)
{
	int	i;
	int	y;
	int	c_flag;
	int	e_flag;
	int	p_flag;	

	i = 0;
	y = 0;
	c_flag = 0;
	e_flag = 0;
	p_flag = 0;
	while (map[i])
	{
		y = 0;
		while (map[i][y])
		{
			ft_count_flags1(map, i, y, &c_flag);
			ft_count_flags2(map, i, y, &e_flag);
			ft_count_flags3(map, i, y, &p_flag);
			y++;
		}
		i++;
	}
	ft_check_items_flag(map, c_flag, e_flag, p_flag);
}

void	ft_check_items_flag(char **map, int c_flag, int e_flag, int p_flag)
{
	if (c_flag == 0)
	{
		ft_free_map(map);
		ft_error("==Err: no collectible==\n==HINT: at least 1 collectible==");
	}
	if (e_flag != 1)
	{
		ft_free_map(map);
		ft_error("==Err: exit err==\n==HINT: 1 exit==");
	}
	if (p_flag != 1)
	{
		ft_free_map(map);
		ft_error("==Err: Player err==\n==HINT: 1 starting position==");
	}
}

void	ft_count_flags1(char **map, int i, int y, int *c_flag)
{
	if (map[i][y] == 'C' || map[i][y] == 'c')
		(*c_flag)++;
	else if (!(ft_check_char(map[i][y])))
	{
		ft_free_map(map);
		ft_error("==Err: item(s) err==");
	}
}

void	ft_count_flags2(char **map, int i, int y, int *e_flag)
{
	if (map[i][y] == 'E' || map[i][y] == 'e')
		(*e_flag)++;
	else if (!(ft_check_char(map[i][y])))
	{
		ft_free_map(map);
		ft_error("==Err: item(s) err==");
	}
}

void	ft_count_flags3(char **map, int i, int y, int *p_flag)
{
	if (map[i][y] == 'P' || map[i][y] == 'p')
		(*p_flag)++;
	else if (!(ft_check_char(map[i][y])))
	{
		ft_free_map(map);
		ft_error("==Err: item(s) err==");
	}
}
