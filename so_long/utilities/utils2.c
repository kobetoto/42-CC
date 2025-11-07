/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:13:23 by thodavid          #+#    #+#             */
/*   Updated: 2025/04/19 12:03:08 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/so_long.h"

int	ft_close_game(t_game *mario)
{
	ft_free_map(mario->map);
	ft_clean_imgs(mario);
	mlx_destroy_window(mario->mlx, mario->win);
	mlx_destroy_display(mario->mlx);
	free(mario->mlx);
	exit (0);
}

void	ft_free_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		free(map[i]);
		i++;
	}
	free(map);
}

int	ft_check_item(char c)
{
	return ((c == 'P') || (c == 'p') || (c == 'E')
		|| (c == 'e') || (c == 'C') || (c == 'c'));
}

int	ft_check_char(char c)
{
	return ((c == '0') || (c == '1') || (ft_check_item(c)));
}

int	ft_check_c_e(char c)
{
	return ((c == 'c') || (c == 'C') || (c == 'e') || (c == 'E'));
}
