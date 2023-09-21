/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:01:04 by myasar            #+#    #+#             */
/*   Updated: 2023/01/21 10:39:21 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
/*
#include <fcntl.h>

int main()
{
	int fd = open("/Users/myasar/Desktop/putstr25.txt", 
	O_WRONLY | O_CREAT | O_RDONLY |O_APPEND,0644);
	ft_putstr_fd("MERHAsadsadBAa",fd);
}
*/
