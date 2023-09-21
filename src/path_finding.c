/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_finding.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:07:27 by myasar            #+#    #+#             */
/*   Updated: 2023/09/21 20:24:01 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include <stdlib.h>

static void	path_finding(int **v_map, t_main *main, int y, int x)
{
	if (main->map->map[y][x] == 'E' || main->map->map[y][x] == 'C')
		main->read_count++;
	if (main->map->map[y - 1][x] != '1' && v_map[y - 1][x] < 1)
	{
		v_map[y - 1][x] = v_map[y][x] + 1;
		path_finding(v_map, main, y - 1, x);
	}
	if (main->map->map[y][x + 1] != '1' && v_map[y][x + 1] < 1)
	{
		v_map[y][x + 1] = v_map[y][x] + 1;
		path_finding(v_map, main, y, x + 1);
	}
	if (main->map->map[y + 1][x] != '1' && v_map[y + 1][x] < 1)
	{
		v_map[y + 1][x] = v_map[y][x] + 1;
		path_finding(v_map, main, y + 1, x);
	}
	if (main->map->map[y][x - 1] != '1' && v_map[y][x - 1] < 1)
	{
		v_map[y][x - 1] = v_map[y][x] + 1;
		path_finding(v_map, main, y, x - 1);
	}
}

void	virtual_map(t_main *main, int y, int x)
{
	int	**v_map;

	v_map = (int **)malloc(sizeof(int *) * main->map->y);
	while (y < main->map->y)
	{
		v_map[y] = (int *)malloc(sizeof(int) * main->map->x);
		x = 0;
		while (x < main->map->x)
		{
			v_map[y][x] = 0;
			x++;
		}
		y++;
	}
	v_map[main->player_y][main->player_x] = 1;
	path_finding(v_map, main, main->player_y, main->player_x);
	if (!(main->read_count == main->c_count + 1))
		ft_error("Error\nCollectables are not accessible!", main);
	virtual_map_free(v_map, main);
}
