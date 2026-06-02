/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:52:25 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/26 11:54:47 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*array;
	size_t	len;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	array = malloc(len + 1);
	if (array == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		array[i] = f(i, s[i]);
		i++;
	}
	array[i] = '\0';
	return (array);
}

/* char	eventoupper(unsigned int i, char c)
{
	if ((i % 2 == 0) && (c >= 97 && c <= 122))
		return (c - 32);
	return (c);
}
int	main  (void)
{
	char *string;

	string = "supercalifragilisticoespialidoso";

	printf("%s\n", ft_strmapi(string,eventoupper));
	free(string);
} */