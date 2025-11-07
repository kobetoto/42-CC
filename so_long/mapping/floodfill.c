/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floodfill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 12:07:54 by thodavid          #+#    #+#             */
/*   Updated: 2025/04/19 12:00:52 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/so_long.h"

void	ft_path_checker(t_game *mario)
{
	char	**map_copy;
	int		x;
	int		y;

	if (buggy_line(mario->map))
	{
		ft_free_map(mario->map);
		ft_error("==Err: unreachable coin (pec)==");
	}
	map_copy = ft_map_dup(mario->map);
	x = mario->player_x;
	y = mario->player_y;
	if (!ft_is_path_valid(map_copy, x, y))
	{
		ft_free_map(map_copy);
		ft_free_map(mario->map);
		ft_error("==Err: floodfill==\n==HINT: unreach. coin/exit==");
	}
	ft_free_map(map_copy);
}

char	**ft_map_dup(char **map_src)
{
	int		i;
	char	**map_copy;

	i = 0;
	map_copy = NULL;
	if (!map_src)
		return (NULL);
	while (map_src[i])
		i++;
	map_copy = malloc(sizeof(char *) * (i +1));
	if (!map_copy)
		ft_error("==Err: memory allocation failed(2)==");
	i = 0;
	while (map_src[i])
	{
		map_copy[i] = ft_strdup(map_src[i]);
		if (!map_copy[i])
		{
			ft_free_map_cpy(i, map_copy);
			ft_error("==Err: memory allocation failed(2')==");
		}
		i++;
	}
	map_copy[i] = NULL;
	return (map_copy);
}

void	ft_floodfill(char **map, int x, int y)
{
	if ((map[y][x] == '1') || (map[y][x] == 'v'))
		return ;
	map[y][x] = 'v';
	ft_floodfill(map, x +1, y);
	ft_floodfill(map, x -1, y);
	ft_floodfill(map, x, y +1);
	ft_floodfill(map, x, y -1);
}

int	ft_is_path_valid(char **map, int p_x, int p_y)
{
	int	i;
	int	j;

	i = 0;
	ft_floodfill(map, p_x, p_y);
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (ft_check_c_e(map[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
