/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:19:12 by thodavid          #+#    #+#             */
/*   Updated: 2025/04/18 17:44:29 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_player_position(t_game *mario)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (mario->map[i])
	{
		j = 0;
		while (mario->map[i][j])
		{
			if (mario->map[i][j] == 'p' || mario->map[i][j] == 'P')
			{
				mario->player_x = j;
				mario->player_y = i;
				return ;
			}
			j++;
		}
		i++;
	}
}

void	ft_move_player(t_game *mario, int x, int y)
{
	int		new_position_x;
	int		new_position_y;
	char	target;

	new_position_x = mario->player_x + x;
	new_position_y = mario->player_y + y;
	target = mario->map[new_position_y][new_position_x];
	if (target == '1')
		return ;
	if (target == 'c' || target == 'C')
		mario->collectibles--;
	if ((target == 'E' || target == 'e') && (mario->collectibles == 0))
		ft_close_game(mario);
	if (target == 'E' || target == 'e')
		return ;
	mario->map[mario->player_y][mario->player_x] = '0';
	mario->map[new_position_y][new_position_x] = 'P';
	mario->player_y = new_position_y;
	mario->player_x = new_position_x;
	mario->anim_flag = (mario->anim_flag +1) % 3;
	mario->move_count++;
	ft_printf("Moves: %d\n", mario->move_count);
	ft_map_building(mario);
}

int	ft_key_hook(int key, t_game *mario)
{
	if (key == 65307)
		ft_close_game(mario);
	else if (key == 'w')
		ft_move_player(mario, 0, -1);
	else if (key == 's')
		ft_move_player(mario, 0, 1);
	else if (key == 'a')
		ft_move_player(mario, -1, 0);
	else if (key == 'd')
		ft_move_player(mario, 1, 0);
	return (0);
}
