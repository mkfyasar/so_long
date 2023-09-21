/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar <myasar@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 20:13:42 by myasar            #+#    #+#             */
/*   Updated: 2023/01/21 10:27:42 by myasar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
/*
void	*del(void *content)
{
	free(content);
	return 0;
	
}


int main()
{
	t_list *node1,*node2,*temp;


	node1 = ft_lstnew("Mehmet");
	node2 = ft_lstnew("Akif");

	//node1->content = node2;

	//temp = node1->content;
	//printf("%s\n",node1->content);
	//printf("%s\n",node1->next->content);

	ft_lstdelone(node1,	(void *)(*del));
	//printf("%s\n",node1->content);
	//printf("%s\n",node1->content);

}
*/