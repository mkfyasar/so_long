/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:14:10 by myasar            #+#    #+#             */
/*   Updated: 2023/01/21 10:26:21 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
	t_list *node1,*node2,*node3;
	node1 = ft_lstnew("akif");
	node2 = ft_lstnew("yasar");
	node3 = ft_lstnew("reis");
	ft_lstadd_front(&node2,node1);
	ft_lstadd_front(&node1,node3);
	printf("%s",node1->content);
	printf("%s",node1->next->content);
	printf("%s\n",node1->next->next->content);

	printf("%d\n",node1);
	printf("%d\n",node2);

	printf("%d\n",node1->next);
	printf("%d\n",node2->next);

	//printf(("%c",node1->next->content));
	

}
*/
