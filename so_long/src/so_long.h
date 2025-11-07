/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:50:18 by thodavid          #+#    #+#             */
/*   Updated: 2025/04/19 13:37:56 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef SO_LONG_H
# define SO_LONG_H
# define T_S 20

# include "../ft_printf/ft_printf.h"
# include "../mlx_linux/mlx/mlx.h"
# include "../get_next_line/get_next_line.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <signal.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_game
{
	char	**map;
	void	*mlx;
	void	*win;
	void	*img_home;
	void	*img_w;
	void	*img_s;
	void	*img_p1;
	void	*img_p2;
	void	*img_p3;
	void	*img_exit;
	void	*img_c;
	int		game_state;
	int		map_w;
	int		map_h;
	int		player_x;
	int		player_y;
	int		move_count;
	int		anim_flag;
	int		collectibles;
}	t_game;

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_error(char *str);
void	ft_free_map(char **map);
void	ft_check_arg(int ac, char **av);
void	ft_map_cheker(char **map);
void	ft_check_border(char **map);
void	ft_check_map_form(char **map);
void	ft_check_map_content(char **map);
void	ft_load_img(t_game *mario);
void	ft_map_building(t_game *mario);
void	ft_clean_imgs(t_game *mario);
void	ft_player_position(t_game *mario);
void	ft_move_player(t_game *mario, int x, int y);
void	ft_collectibles_count(t_game *mario);
void	ft_check_struct(t_game *mario);
void	ft_flip_flop(t_game *mario, int i, int y);
void	ft_check_items_flag(char **map, int c_flag, int e_flag, int p_flag);
void	ft_count_flags1(char **map, int i, int y, int *c_flag);
void	ft_count_flags2(char **map, int i, int y, int *e_flag);
void	ft_count_flags3(char **map, int i, int y, int *p_flag);
void	ft_floodfill(char **map, int x, int y);
void	ft_put_item_img(char img, int i, int y, t_game *mario);
void	ft_free_map_cpy(int i, char **map);
void	ft_path_checker(t_game *mario);
void	ft_check_map_size(int i, char **map);
char	**ft_map_dup(char **map_src);
char	**ft_load_map(char *path);
char	**ft_malloc_map(int count_lines, int fd);
char	*ft_strdup(const char *src);
int		ft_is_path_valid(char **map, int p_x, int p_y);
int		ft_check_c_e(char c);
int		ft_count_lines(char *map_path);
int		ft_check_item(char c);
int		ft_check_char(char c);
int		ft_close_game(t_game *mario);
int		ft_key_hook(int key, t_game *mario);
int		buggy_line(char **map);
int		line_bad_order(char *line);
int		buggy_case(char **map);

#endif
