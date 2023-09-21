/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:00:52 by myasar            #+#    #+#             */
/*   Updated: 2023/01/21 10:31:49 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
#include<fcntl.h>
int main()
{
	int fd = open("/Users/myasar/Desktop/txtyakup11211.txt", O_RDWR | O_CREAT );
	ft_putendl_fd("yakup",fd);
}
*/