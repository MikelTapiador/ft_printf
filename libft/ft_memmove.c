/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:45:37 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/19 16:41:11 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "abcdef";
	char	str2[] = "abcdef";

	memmove(str1 + 2, str1, 3);
	ft_memmove(str2 + 2, str2, 3);

	printf("memmove:    %s\n", str1);
	printf("ft_memmove: %s\n", str2);
	return (0);
} */
