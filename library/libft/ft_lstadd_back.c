/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:14:04 by myasar            #+#    #+#             */
/*   Updated: 2023/01/21 10:25:53 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!*lst)
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}
/*
int main()
{
	t_list *node1,*node2;
	
	node1 = ft_lstnew("Akif");
	node2 = ft_lstnew("Mehmet");

	ft_lstadd_back(&node1,node2);
	printf("%s\n",node1 ->content);
	printf("%s\n",node1 ->next-> content);
	printf("%d\n",ft_lstsize(node1));
	printf("%d\n",ft_lstsize(node2));

}


*/
