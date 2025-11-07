/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:34:14 by thodavid          #+#    #+#             */
/*   Updated: 2025/04/18 11:25:41 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_load_img(t_game *mario)
{
	int	w;
	int	h;

	mario->img_w = mlx_xpm_file_to_image(mario->mlx,
			"assets/block.xpm", &w, &h);
	mario->img_home = mlx_xpm_file_to_image(mario->mlx,
			"assets/home.xpm", &w, &h);
	mario->img_s = mlx_xpm_file_to_image(mario->mlx,
			"assets/sky1.xpm", &w, &h);
	mario->img_p1 = mlx_xpm_file_to_image(mario->mlx,
			"assets/mario1.xpm", &w, &h);
	mario->img_p2 = mlx_xpm_file_to_image(mario->mlx,
			"assets/mario2.xpm", &w, &h);
	mario->img_p3 = mlx_xpm_file_to_image(mario->mlx,
			"assets/mario3.xpm", &w, &h);
	mario->img_c = mlx_xpm_file_to_image(mario->mlx,
			"assets/coin.xpm", &w, &h);
	mario->img_exit = mlx_xpm_file_to_image(mario->mlx,
			"assets/exitTube.xpm", &w, &h);
	if (!mario->img_w || !mario->img_s || !mario->img_p1 || !mario->img_p2
		|| !mario->img_p3 || !mario->img_c || !mario->img_exit)
		ft_error("==Err: loading images==");
}

void	ft_map_building(t_game *mario)
{
	int		i;
	int		y;
	char	img;

	i = 0;
	while (mario->map[i])
	{
		y = 0;
		while (mario->map[i][y])
		{
			img = mario->map[i][y];
			mlx_put_image_to_window(mario->mlx, mario->win,
				mario->img_s, y * T_S, i * T_S);
			ft_put_item_img(img, i, y, mario);
			y++;
		}
		i++;
	}
}

void	ft_put_item_img(char img, int i, int y, t_game *mario)
{
	if (img == '1')
		mlx_put_image_to_window(mario->mlx, mario->win,
			mario->img_w, y * T_S, i * T_S);
	if (img == 'P' || img == 'p')
		ft_flip_flop(mario, i, y);
	if (img == 'C' || img == 'c')
		mlx_put_image_to_window(mario->mlx, mario->win,
			mario->img_c, y * T_S, i * T_S);
	if (img == 'E' || img == 'e')
		mlx_put_image_to_window(mario->mlx, mario->win,
			mario->img_exit, y * T_S, i * T_S);
}

void	ft_flip_flop(t_game *mario, int i, int y)
{
	if (mario->anim_flag == 0)
		mlx_put_image_to_window(mario->mlx,
			mario->win, mario->img_p1, y * T_S, i * T_S);
	else if (mario->anim_flag == 1)
		mlx_put_image_to_window(mario->mlx,
			mario->win, mario->img_p2, y * T_S, i * T_S);
	else
		mlx_put_image_to_window(mario->mlx,
			mario->win, mario->img_p3, y * T_S, i * T_S);
}

void	ft_clean_imgs(t_game *mario)
{
	if (mario->img_w)
		mlx_destroy_image(mario->mlx, mario->img_w);
	if (mario->img_s)
		mlx_destroy_image(mario->mlx, mario->img_s);
	if (mario->img_p1)
		mlx_destroy_image(mario->mlx, mario->img_p1);
	if (mario->img_p2)
		mlx_destroy_image(mario->mlx, mario->img_p2);
	if (mario->img_p3)
		mlx_destroy_image(mario->mlx, mario->img_p3);
	if (mario->img_exit)
		mlx_destroy_image(mario->mlx, mario->img_exit);
	if (mario->img_c)
		mlx_destroy_image(mario->mlx, mario->img_c);
}
