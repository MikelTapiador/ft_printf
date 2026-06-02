/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 12:05:59 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/27 14:10:12 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

/* #include <string.h>
#include <stdio.h>
int main (void)
{
	char str[] = "Amama Begona";
	char str1[] = "Amama Begona";
	memset(str, 'X', 3);
	ft_memset(str1, 'X', 3);
	printf("%s\n", str);
	printf("%s\n", str1);
} */
