/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:20:19 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/20 10:08:37 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	k = i;
	if (i == size)
		return (size + ft_strlen(src));
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (k + ft_strlen(src));
}

/* #include <string.h>
#include <stdio.h>
#include <bsd/string.h>

int main (void)
{
	size_t size;

	char destiny[50] = "Hola me llamo";
	const char source[] = "Mikel";
	
	size = 19;
	printf("%zu\n",ft_strlcat(destiny,source, size));
	printf("%s",destiny); 
}
 */