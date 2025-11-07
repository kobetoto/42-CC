/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:21:24 by thodavid          #+#    #+#             */
/*   Updated: 2025/04/18 15:38:49 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_game	mario;

	ft_check_arg(ac, av);
	mario.map = ft_load_map(av[1]);
	ft_map_cheker(mario.map);
	ft_player_position(&mario);
	ft_path_checker(&mario);
	mario.map_h = ft_count_lines(av[1]) * T_S;
	mario.map_w = ft_strlen(mario.map[0]) * T_S;
	mario.mlx = mlx_init();
	mario.win = mlx_new_window(mario.mlx, mario.map_w,
			mario.map_h, "MARIO BROS.");
	ft_check_struct(&mario);
	ft_load_img(&mario);
	ft_collectibles_count(&mario);
	mario.move_count = 0;
	mario.anim_flag = 0;
	ft_map_building(&mario);
	mlx_hook(mario.win, 17, 0, ft_close_game, &mario);
	mlx_hook(mario.win, 2, 1L << 0, ft_key_hook, &mario);
	mlx_loop(mario.mlx);
	mlx_destroy_display(mario.mlx);
	free(mario.mlx);
	ft_free_map(mario.map);
	return (0);
}

char	**ft_load_map(char *map_path)
{
	int			fd;
	int			count_lines;
	char		**map;

	count_lines = ft_count_lines(map_path);
	if (count_lines == 0)
		ft_error("==Err: empty map==");
	fd = open(map_path, O_RDONLY);
	if (fd < 0)
		ft_error("==Err: can't open the map\n");
	map = ft_malloc_map(count_lines, fd);
	close(fd);
	return (map);
}

char	**ft_malloc_map(int count_lines, int fd)
{
	char		**map;
	char		*line;
	int			i;

	i = 0;
	line = NULL;
	map = malloc(sizeof(char *) * (count_lines +1));
	if (!map)
		ft_error("==Err: memory allocation failed(1)==");
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		if (line[ft_strlen(line) - 1] == '\n')
			line[ft_strlen(line) - 1] = '\0';
		map[i] = ft_strdup(line);
		free(line);
		i++;
	}
	map[i] = NULL;
	return (map);
}
