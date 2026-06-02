/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:01:22 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/21 19:04:09 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*d;
	const unsigned char		*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/* #include <string.h>
#include <stdio.h>

int main (void)
{
	char str[50];
	char str2[] = "Lavapies lava mal";
	char str3[50];
	char str4[] = "Lavapies lava mal";
	memcpy(str, str2, 33);
	ft_memcpy(str3, str4, 33);
	printf("%s\n", str);
	printf("%s\n", str3);
} */
