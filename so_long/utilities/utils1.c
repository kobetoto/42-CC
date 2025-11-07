/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 11:01:34 by thodavid          #+#    #+#             */
/*   Updated: 2025/04/19 12:03:17 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/so_long.h"

void	ft_check_arg(int ac, char **av)
{
	int	len;

	len = 0;
	if (ac != 2)
		ft_error("==Err: wrong number of arg==\n==HINT: ./so_long *.ber==");
	while (av[1][len])
		len++;
	if (len < 4)
		ft_error("==Err: wrong arg==\n==HINT: ./so_long *.ber==");
	if (!(av[1][len - 4] == '.' && av[1][len - 3] == 'b' &&
		av[1][len - 2] == 'e' && av[1][len -1] == 'r'))
		ft_error("==Err: wrong extension name==\n==HINT: ./so_long *.ber==");
}

void	ft_check_struct(t_game *mario)
{
	if (mario->mlx == NULL)
		ft_error("==Err: mlx init==");
	if (mario->win == NULL)
	{
		ft_free_map(mario->map);
		mlx_destroy_display(mario->mlx);
		free(mario->mlx);
		ft_error("==Err: mlx window==");
	}
}

int	ft_count_lines(char *map_path)
{
	int			fd;
	int			count_lines;
	char		*line;

	fd = open(map_path, O_RDONLY);
	count_lines = 0;
	line = NULL;
	if (fd < 0)
		ft_error("==Err: map\n==HINT: err path/name==");
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		count_lines++;
		free(line);
	}
	if (count_lines <= 2)
		ft_error("==Err: map err (too small(1))==");
	close(fd);
	return (count_lines);
}

void	ft_collectibles_count(t_game *mario)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	mario->collectibles = 0;
	while (mario->map[i])
	{
		j = 0;
		while (mario->map[i][j])
		{
			if (mario->map[i][j] == 'c' || mario->map[i][j] == 'C')
				mario->collectibles++;
			j++;
		}
		i++;
	}
}

void	ft_free_map_cpy(int i, char **map)
{
	while (i >= 0)
	{
		free(map[i]);
		i--;
	}
	free(map);
}
