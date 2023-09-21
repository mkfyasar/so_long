/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:14:48 by myasar            #+#    #+#             */
/*   Updated: 2023/01/21 10:30:45 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

/*
int main()
{
	t_list *node1 ,*node2, *node3, *node4;
	node1 = ft_lstnew("yakup");
	node2 = ft_lstnew("yak1up");
	node3 = ft_lstnew("yak1up");
	node4 = ft_lstnew("yak1up");


	// node1->next = node2;
	// node1->next->next = node3;
	// node1->next->next->next = node4;
	// node1->next->next->next->next = NULL;



	ft_lstadd_front(&node1,node2);
	ft_lstadd_front(&node2,node3);
	ft_lstadd_front(&node3,node4);

	int sonuc = ft_lstsize(node4);
	printf("%d",sonuc);
}
*/