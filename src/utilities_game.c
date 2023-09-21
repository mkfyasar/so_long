/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities_game.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:08:00 by myasar            #+#    #+#             */
/*   Updated: 2023/09/21 20:26:40 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include "../library/minilibx_opengl/mlx.h"
#include "../library/libft/libft.h"

void	print_count(t_main *main)
{
	char	*str;

	str = ft_itoa(main->m_count);
	mlx_string_put(main->mlx, main->win, 10, 10, 0x1000000, "Move Count: ");
	mlx_string_put(main->mlx, main->win, 100, 10, 0x1000000, str);
	free(str);
}

void	check_parameters(int ac, char **av)
{
	int	map_parameter_len;

	if (ac > 2)
		path_error("Error! Too many arguments (It should be only two).");
	if (ac < 2)
		path_error("Error! The Map file is missing.");
	map_parameter_len = ft_strlen(av[1]);
	if (!ft_strnstr(&av[1][map_parameter_len - 4], ".ber", 4))
		path_error("Error! Map file extention is wrong (It should be .ber).");
}

void	path_error(char *errormsg)
{
	int	i;

	i = 0;
	while (errormsg[i])
	{
		write(1, &errormsg[i], 1);
		i++;
	}
	write(1, "\n", 1);
	exit(0);
}
