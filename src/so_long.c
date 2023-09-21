/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:07:41 by myasar            #+#    #+#             */
/*   Updated: 2023/09/21 21:13:53 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include "../library/minilibx_opengl/mlx.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

static void	path_check(char *str)
{
	int	fd;

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		path_error("Error\nInvalid path");
	}
}

int	main(int argc, char **argv)
{
	t_main	*main;

	main = (t_main *)malloc(sizeof(t_main));
	check_parameters(argc, argv);
	path_check(argv[1]);
	main_initiliazer(argv[1], &main);
	map_checker(main);
	virtual_map(main, 0, 0);
	draw_map(main);
	mlx_hook(main->win, 2, 1L << 0, key_hook, main);
	mlx_loop_hook(main->mlx, render, main);
	mlx_hook(main->win, 17, 0, ft_x_button, main);
	mlx_loop(main->mlx);
}
