/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:14:29 by myasar            #+#    #+#             */
/*   Updated: 2023/01/21 10:38:53 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int main()
{
	t_list *node1, *node2;

	node1 = ft_lstnew("Yakup");
	node2 = ft_lstnew("Hamza");
	node1->next=node2;
	ft_lstlast(node1);
	
	printf("%s\n",(char *)ft_lstlast(node1)->content);
	printf("%zu",node2);

	

}
*/