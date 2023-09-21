/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:14:42 by myasar            #+#    #+#             */
/*   Updated: 2023/01/12 20:18:22 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// #include <stdio.h>

// int main()
// {
//     printf("%s",(char *)ft_lstnew("sami")->content);
// }

// fonksiyona girilen parametre struct yapısının içeriğine eklenir.
// bir sonraki bağlı liste olmadığı için struct yapısının
// next pointerına NULL atanır.
// yeni oluşturulan struct return edilir.
