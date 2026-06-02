/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 14:11:33 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/26 16:41:42 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/* 
int	main(void)
{
	t_list	*node;
	char	*str;

	str = "Hola lista";
	node = ft_lstnew(str);
	if (node == NULL)
		return (1);
	printf("content: %s\n", (char *)node->content);
	printf("next: %p\n", node->next);
	free(node);
	return (0);
} */