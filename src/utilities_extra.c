/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities_extra.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 21:07:53 by myasar            #+#    #+#             */
/*   Updated: 2023/09/21 21:22:58 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	map_cem_checker(t_main **main, int i, int j)
{
	if ((*main)->map->map[i][j] == 'C')
		(*main)->c_count++;
	if ((*main)->map->map[i][j] == 'E')
		(*main)->e_count++;
}
