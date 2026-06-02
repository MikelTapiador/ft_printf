/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 10:40:17 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/27 14:10:31 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*clean_list(t_list **newlist, void (*del)(void *))
{
	ft_lstclear(newlist, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*newcontent;
	t_list	*newlist;
	t_list	*new_node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		newcontent = f(lst->content);
		if (newcontent == NULL)
			return (clean_list(&newlist, del));
		new_node = ft_lstnew(newcontent);
		if (new_node == NULL)
		{
			del(newcontent);
			return (clean_list(&newlist, del));
		}
		ft_lstadd_back(&newlist, new_node);
		lst = lst->next;
	}
	return (newlist);
}

/* void	*double_number(void *content)
{
	int	*new_number;

	new_number = malloc(sizeof(int));
	if (new_number == NULL)
		return (NULL);
	*new_number = (*(int *)content) * 2;
	return (new_number);
}

void	del_content(void *content)
{
	free(content);
}

void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%d\n", *(int *)lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*list;
	t_list	*mapped;
	int		a;
	int		b;
	int		c;

	list = NULL;
	a = 1;
	b = 2;
	c = 3;
	ft_lstadd_back(&list, ft_lstnew(&a));
	ft_lstadd_back(&list, ft_lstnew(&b));
	ft_lstadd_back(&list, ft_lstnew(&c));
	printf("Original list:\n");
	print_list(list);
	mapped = ft_lstmap(list, double_number, del_content);
	printf("\nMapped list:\n");
	print_list(mapped);
	ft_lstclear(&mapped, del_content);
	return (0);
} */