/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:14:21 by myasar            #+#    #+#             */
/*   Updated: 2023/09/21 21:26:57 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include <stdlib.h>

void	ft_free(t_main *main)
{
	free(main->map);
	free(main->sprite);
	free(main);
}

void	virtual_map_free(int **v_map, t_main *main)
{
	int	i;

	i = 0;
	while (i < main->map->y)
	{
		free(v_map[i]);
		i++;
	}
	free(v_map);
}

void	ft_free_map(char **main)
{
	int	x;

	x = -1;
	while (++x, main[x])
	{
		free(main[x]);
		main[x] = (void *)0;
	}
	free(main);
	main = (void *)0;
}
