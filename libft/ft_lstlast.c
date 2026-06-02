/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 17:13:53 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/27 12:34:53 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst-> next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}
/* t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	int	len;

	if (lst == NULL)
		return (NULL);
	i = 0;
	len = ft_lstsize(lst);
	while (i < len - 1)
	{
		lst = lst -> next;
		i++;
	}
	return (lst);
} */

/* int main (void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*result;

	list = NULL;
	node1 = ft_lstnew("Nodo 1");
	node2 = ft_lstnew("Nodo 2");
	node3 = ft_lstnew("Nodo 3");

	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node3);

	result = ft_lstlast(list);

	printf("%s\n", (char *)result -> content);
} */
