/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:43:21 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/21 15:25:52 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "HolaX";
	char s2[] = "HolaÑ";
	int NoP;
	int PoN;
	int size;

	size = 5;

	NoP = ft_strncmp(s1, s2, size);
	PoN = strncmp(s1, s2, size);
	printf("NoP: %d\n", NoP);
	printf("PoN: %d\n", PoN);
	return (0);
} */
