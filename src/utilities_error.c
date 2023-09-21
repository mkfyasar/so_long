/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:07:48 by myasar            #+#    #+#             */
/*   Updated: 2023/09/21 21:27:25 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include <unistd.h>
#include <stdlib.h>

void	ft_error(char *errormsg, t_main *main)
{
	int	i;

	i = 0;
	while (errormsg[i])
	{
		write(1, &errormsg[i], 1);
		i++;
	}
	write(1, "\n", 1);
	ft_free_map(main->map->map);
	ft_free(main);
	exit(0);
}

int	ft_x_button(t_main *main)
{
	ft_free_map(main->map->map);
	system("leaks so_long");
	exit(0);
	return (0);
}

void	map_control(t_main *main, int i, int j)
{
	if (main->map->map[i][j] != 'P' || main->map->map[i][j] != '1'
		|| main->map->map[i][j] != 'C' || main->map->map[i][j] != 'E'
		|| main->map->map[i][j] != '0')
	{
		ft_error("Error\nWrong character on map.", main);
	}
}
