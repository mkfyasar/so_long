/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:14:14 by myasar            #+#    #+#             */
/*   Updated: 2023/01/21 10:27:48 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)-> next;
		ft_lstdelone((*lst), del);
		*(lst) = temp;
	}
}

/*

 #include <stdio.h>

void    *del(void *content)
{
  free(content);
    return 0;
}

int main()
{
	t_list *node1,*node2;

	node1 = (t_list*)malloc(sizeof(t_list));
	node2 = (t_list*)malloc(sizeof(t_list));


	node1->next=node2;

	printf("%s\n",node1->content);
	printf("%s\n",node2->content);

	ft_lstclear(&node2,(void *)(*del));

		if(node2)
		printf("1\n");
	else
		printf("0\n");

	if(node1)
		printf("1\n");
	else
		printf("0\n");
}
*/