/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 13:25:07 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/20 14:27:30 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/* #include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	big[] = "Hola me llamo Mikel";
	char	little[] = "Mikel";

	printf("%s\n", ft_strnstr(big, little, 20));
	printf("%s\n", ft_strnstr(big, little, 10));
	printf("%s\n", ft_strnstr(big, "", 10));
	return (0);
} */
