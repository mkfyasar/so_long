/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:07:21 by myasar            #+#    #+#             */
/*   Updated: 2023/09/21 21:30:00 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include "../library/libft/libft.h"
#include "../library/minilibx_opengl/mlx.h"

void	ft_up(t_main *main)
{
	main->player_y--;
	main->m_count++;
	ft_putstr_fd("\033[1;42m\rMove:", 1);
	ft_putnbr_fd(main->m_count, 1);
	if (main->map->map[main->player_y][main->player_x] == 'C')
	{
		main->map->map[main->player_y][main->player_x] = '0';
		main->flag = 1;
		main->c_count--;
	}
}

void	ft_left(t_main *main)
{
	main->player_x--;
	main->m_count++;
	ft_putstr_fd("\033[1;42m\rMove:", 1);
	ft_putnbr_fd(main->m_count, 1);
	if (main->map->map[main->player_y][main->player_x] == 'C')
	{
		main->map->map[main->player_y][main->player_x] = '0';
		main->flag = 1;
		main->c_count--;
	}
}

void	ft_down(t_main *main)
{
	main->player_y++;
	main->m_count++;
	ft_putstr_fd("\033[1;42m\rMove:", 1);
	ft_putnbr_fd(main->m_count, 1);
	if (main->map->map[main->player_y][main->player_x] == 'C')
	{
		main->map->map[main->player_y][main->player_x] = '0';
		main->flag = 1;
		main->c_count--;
	}
}

void	ft_right(t_main *main)
{
	main->player_x++;
	main->m_count++;
	ft_putstr_fd("\033[1;42m\rMove:", 1);
	ft_putnbr_fd(main->m_count, 1);
	if (main->map->map[main->player_y][main->player_x] == 'C')
	{
		main->map->map[main->player_y][main->player_x] = '0';
		main->flag = 1;
		main->c_count--;
	}
}

int	key_hook(int keycode, t_main *main)
{
	if (keycode == ESC)
	{
		mlx_destroy_window(main->mlx, main->win);
		exit(0);
	}
	else if (keycode == W && main->map->map[main->player_y
			- 1][main->player_x] != '1')
		ft_up(main);
	else if (keycode == A && main->map->map[main->player_y][main->player_x
		- 1] != '1')
		ft_left(main);
	else if (keycode == S && main->map->map[main->player_y
			+ 1][main->player_x] != '1')
		ft_down(main);
	else if (keycode == D && main->map->map[main->player_y][main->player_x
		+ 1] != '1')
		ft_right(main);
	return (0);
}
