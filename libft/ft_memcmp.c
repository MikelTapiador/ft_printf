/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 12:14:34 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/20 13:07:48 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t					i;
	const unsigned char		*ptr;
	const unsigned char		*ptr2;

	i = 0;
	ptr = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ptr[i] != ptr2[i])
		{
			return (ptr[i] - ptr2[i]);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	const unsigned char s1[] = "HolaX";
	const unsigned char s2[] = "HolaY";
	int NoP;
	int PoN;
	size_t size;

	size = 5;

	NoP = ft_memcmp(s1, s2, size);
	PoN = memcmp(s1, s2, size);
	printf("NoP: %d\n", NoP);
	printf("PoN: %d\n", PoN);
	return (0);
} */
