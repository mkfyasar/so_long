/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 12:00:59 by myasar            #+#    #+#             */
/*   Updated: 2023/01/21 10:37:24 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = (nb * -1);
	}
	if (nb < 10)
		ft_putchar_fd(nb + 48, fd);
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
/*
#include <fcntl.h>
int main()
{
	 //int fd = open("/Users/myasar/Desktop/dennnn.txt", 
	 O_RDWR | O_CREAT, 0644);
     int fd = open("/Users/myasar/Desktop/test11221.txt",
	 O_WRONLY | O_CREAT,0644);
	ft_putstr_fd("Merhaba ",fd);
 	ft_putnbr_fd(-42,fd);
 	ft_putstr_fd(" Kocaeli",fd);
}
*/