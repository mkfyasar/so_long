/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:07:07 by myasar            #+#    #+#             */
/*   Updated: 2023/09/21 20:20:11 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include "../library/minilibx_opengl/mlx.h"

void	convert(t_main *main)
{
	int	x;
	int	y;

	main->sprite->wall = mlx_xpm_file_to_image(
			main->mlx, "./images/wall.xpm", &x, &y);
	main->sprite->player = mlx_xpm_file_to_image(
			main->mlx, "./images/player.xpm", &x, &y);
	main->sprite->coin = mlx_xpm_file_to_image(
			main->mlx, "./images/chest.xpm", &x, &y);
	main->sprite->tile = mlx_xpm_file_to_image(
			main->mlx, "./images/background.xpm", &x, &y);
	main->sprite->exit = mlx_xpm_file_to_image(
			main->mlx, "./images/exit.xpm", &x, &y);
}

int	draw_map3(t_main *main, int i, int j)
{
	if (main->map->map[i][j] == 'E')
	{
		mlx_put_image_to_window(
			main->mlx, main->win, main->sprite->tile, j * PIXEL, i * PIXEL);
		mlx_put_image_to_window(
			main->mlx, main->win, main->sprite->exit, j * PIXEL, i * PIXEL);
	}
	else if (main->map->map[i][j] == 'C')
	{
		mlx_put_image_to_window(
			main->mlx, main->win, main->sprite->tile, j * PIXEL, i * PIXEL);
		mlx_put_image_to_window(
			main->mlx, main->win, main->sprite->coin, j * PIXEL, i * PIXEL);
	}
	return (j);
}

int	draw_map2(t_main *main, int i, int j)
{
	if (main->map->map[i][j] == '1')
		mlx_put_image_to_window(
			main->mlx, main->win, main->sprite->wall, j * PIXEL, i * PIXEL);
	else if (main->map->map[i][j] == '0')
		mlx_put_image_to_window(
			main->mlx, main->win, main->sprite->tile, j * PIXEL, i * PIXEL);
	else if (main->map->map[i][j] == 'P')
	{
		mlx_put_image_to_window(
			main->mlx, main->win, main->sprite->player, j * PIXEL, i * PIXEL);
		main->player_y = i;
		main->player_x = j;
	}
	else if (main->map->map[i][j] == 'C' || main->map->map[i][j] == 'E')
		j = draw_map3(main, i, j);
	else
		map_control(main, i, j);
	j++;
	return (j);
}

void	draw_map(t_main *main)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	convert(main);
	while (i < (main->map->y))
	{
		while (j < (main->map->x - 1))
		{
			j = draw_map2(main, i, j);
		}
		i++;
		j = 0;
	}
}
