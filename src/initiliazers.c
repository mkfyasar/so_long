/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initiliazers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:07:14 by myasar            #+#    #+#             */
/*   Updated: 2023/09/21 20:23:28 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include "../library/libft/libft.h"
#include "../library/minilibx_opengl/mlx.h"
#include <fcntl.h>

char	**map_initiliazer(char *path, t_main *main)
{
	char	*line;
	int		i;
	int		fd;
	char	*temp;
	char	**map;

	fd = open(path, O_RDONLY);
	main->map->x = column_counter(path);
	main->map->y = line_counter(path);
	map = (char **)malloc(sizeof(char *) * (main->map->y + 1));
	i = 0;
	while (i < main->map->y)
	{
		temp = get_next_line(fd);
		line = ft_strtrim(temp, "\n");
		map[i] = line;
		free(temp);
		i++;
	}
	map[i] = NULL;
	close(fd);
	return (map);
}

void	main_initiliazer(char *path, t_main **main)
{
	char	*title;

	title = "so_long";
	(*main)->map = (t_map *)malloc(sizeof(t_map));
	(*main)->sprite = (t_sprite *)malloc(sizeof(t_sprite));
	(*main)->read_count = 0;
	(*main)->p_count = 0;
	(*main)->c_count = 0;
	(*main)->e_count = 0;
	(*main)->m_count = 0;
	(*main)->i = 0;
	(*main)->j = 0;
	(*main)->mlx = mlx_init();
	(*main)->map->map = map_initiliazer(path, *main);
	(*main)->win = mlx_new_window((*main)->mlx, ((*main)->map->x - 1) * PIXEL,
			(*main)->map->y * PIXEL, title);
}
