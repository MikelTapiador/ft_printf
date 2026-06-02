/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:18:33 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/21 09:59:47 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while ((i < size -1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/* #include <string.h>
#include <stdio.h>
#include <bsd/string.h>
int main (void)
{
	size_t size;
	size = 3;
	char destiny[50];
	char source[] = "Hola me llamo Paco";
	char destiny2[50];
	char source2[] = "Hola me llamo Paco"; 

	ft_strlcpy(destiny, source, size);
	strlcpy(destiny2, source2, size);

	printf("%zu\n",ft_strlcpy(destiny, source, size));
	printf("%zu\n",strlcpy(destiny2, source2, size));
	
	printf("%s\n", destiny);
	printf("%s\n", destiny2);
} */
