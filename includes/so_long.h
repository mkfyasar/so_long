/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:42:42 by myasar            #+#    #+#             */
/*   Updated: 2023/09/21 20:29:07 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define FRAME 3

# define ESC 53
# define W 13
# define A 0
# define S 1
# define D 2

# define PIXEL 32

typedef struct s_sprite
{
	void		*tile;
	void		*open_chest;
	void		*exit;
	void		*coin;
	void		*player;
	char		player_direction;
	void		*wall;
	int			sprite_h;
	int			sprite_w;
}				t_sprite;

typedef struct s_map
{
	char		**map;
	int			x;
	int			y;

}				t_map;

typedef struct s_main
{
	void		*mlx;
	void		*win;
	void		*img;
	int			p_count;
	int			c_count;
	int			e_count;
	int			m_count;
	int			read_count;
	int			player_x;
	int			player_y;
	int			flag;
	int			i;
	int			j;
	int			loop_count;
	t_map		*map;
	t_sprite	*sprite;
}				t_main;

// Initiliazers
void			main_initiliazer(char *map_path, t_main **main);
char			**map_initiliazer(char *path, t_main *main);
int				line_counter(char *path);
int				column_counter(char *path);

// Checks
void			check_parameters(int ac, char **av);
void			map_checker(t_main *main);

// Map Utilities
void			virtual_map(t_main *main, int y, int x);
void			draw_map(t_main *main);
void			path_error(char *errormsg);
void			map_cem_checker(t_main **main, int i, int j);

// Error Utilities
int				ft_x_button(t_main *main);
void			virtual_map_free(int **v_map, t_main *main);
void			ft_free(t_main *main);
void			ft_error(char *errormsg, t_main *main);
void			map_control(t_main *main, int i, int j);
void			ft_free_map(char **main);

// Game Utilities
int				key_hook(int keycode, t_main *main);
int				render(t_main *main);
void			print_count(t_main *main);

#endif
