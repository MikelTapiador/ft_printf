/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 09:21:44 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/27 10:24:13 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)-> next;
		del((*lst)-> content);
		free (*lst);
		*lst = temp;
	}
	*lst = NULL;
}

/* void	del_content(void *content)
{
	free (content);
}

int main (void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*temp;

	list = NULL;
	node1 = ft_lstnew(ft_strdup("Nodo 1"));;
	node2 = ft_lstnew(ft_strdup("Nodo 2"));
	node3 = ft_lstnew(ft_strdup("Nodo 3"));

	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);
	
	temp = list;
	while (temp != NULL)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	
	ft_lstclear(&list, del_content);

	while (list != NULL)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
} */
