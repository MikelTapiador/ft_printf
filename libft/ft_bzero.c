/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 13:08:58 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/21 09:54:10 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
/* #include <strings.h>
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Mikel";
	char	str2[] = "Mikel";

	bzero(str1 + 2, 2);
	ft_bzero(str2 + 2, 2);

	printf("bzero:    ");
	printf("%s\n", str1);

	printf("ft_bzero: ");
	printf("%s\n", str2);

	return (0);
} */
