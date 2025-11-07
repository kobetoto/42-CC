/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapping.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 10:46:33 by thodavid          #+#    #+#             */
/*   Updated: 2025/04/18 16:24:58 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/so_long.h"

void	ft_map_cheker(char **map)
{
	ft_check_map_form(map);
	ft_check_border(map);
	ft_check_map_content(map);
}

void	ft_check_map_form(char **map)
{
	int	i;
	int	first_line_len;
	int	line_len;

	i = 1;
	line_len = 0;
	first_line_len = ft_strlen(map[0]);
	if (first_line_len < 5 || first_line_len > 98)
	{
		ft_free_map(map);
		ft_error("==Err: map err (too small/big)(1)==");
	}
	while (map[i])
	{
		line_len = ft_strlen(map[i]);
		if (line_len != first_line_len)
		{
			ft_free_map(map);
			ft_error("==Err: map err (wrong shape)==");
		}
		i++;
	}
	ft_check_map_size(i, map);
}

void	ft_check_border(char **map)
{
	int	i;
	int	y;
	int	len;

	i = 0;
	len = ft_strlen(map[0]);
	while (map[i])
	{
		if ((map[i][0] != '1') || (map[i][len -1] != '1'))
		{
			ft_free_map(map);
			ft_error("==Err: map err (wrong border)==");
		}
		i++;
	}
	y = 0;
	while (map[0][y] && map[i - 1][y])
	{
		if ((map[0][y] != '1') || (map[i - 1][y] != '1'))
		{
			ft_free_map(map);
			ft_error("==Err: map err (wrong border)==");
		}
		y++;
	}
}

void	ft_check_map_size(int i, char **map)
{
	if ((i > 51) || (i <= 2))
	{
		ft_free_map(map);
		ft_error("==Err: map err (too small/big)==");
	}
}
