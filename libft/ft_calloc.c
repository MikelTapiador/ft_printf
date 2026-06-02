/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:37:27 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/21 11:13:45 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	ptr = malloc (nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero (ptr, nmemb * size);
	return (ptr);
}
/* #include <stdio.h>
int main (void)
{
	int		*arr;
	size_t	i;

	arr = ft_calloc(5, sizeof(int));
	//arr = ft_calloc(16, 16);
	i = 0;
	while (i < 5)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
} */