/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:14:23 by myasar            #+#    #+#             */
/*   Updated: 2023/01/21 10:28:36 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>

// void ft_change(void *content)
// {
// 	((char *)content)[0] -= 32;
// }

// int main()
// {
// 	  t_list *node1,*node2,*node3;

// 	  node1 = (t_list *)malloc(sizeof(t_list));
// 	  node2 = (t_list *)malloc(sizeof(t_list));
// 	  node3 = (t_list *)malloc(sizeof(t_list));

// 	  ft_lstadd_back(&node1,node2);
// 	  ft_lstadd_back(&node1,node3);

// 	  node1->content = ft_strdup("kocaeli");
// 	  node2->content = ft_strdup("kocaeli");
// 	  node3->content = ft_strdup("kocaeli");

// 	  ft_lstiter(node1,ft_change);

// 	  printf("%s\n",(char *)node1->content);
// 	  printf("%s\n",(char *)node1->next->content);
// 	  printf("%s\n",(char *)node1->next->next->content);
// }

// struct bağlı listelerinin her bir elemanının 
// contentine parametredeki fonksiyonu uygular.
