/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:25:53 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/26 19:19:12 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*array;
	size_t	i;
	size_t	j;
	size_t	k;

	if (s1 == NULL || set == NULL)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	k = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (j > i && ft_strchr(set, s1[j - 1]) != NULL)
		j--;
	array = malloc(j - i + 1);
	if (array == NULL)
		return (NULL);
	while (i < j)
	{
		array[k] = s1[i];
		k++;
		i++;
	}
	array[k] = '\0';
	return (array);
}
/* int main (void)
{
	
	char string[] = "              Hola esto es una pruebaaaa                 ";
	char set[] = " Ha";
	char *array;
	array = ft_strtrim(string,set);
	printf("%s",array);
	free (array);
} */