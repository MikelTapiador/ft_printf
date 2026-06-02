/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 10:02:58 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/21 10:57:40 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*arr;

	i = 0;
	arr = malloc((ft_strlen(s) + 1) * sizeof(const char));
	if (arr == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		arr[i] = s[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

/* int main(void)
{
	const char string[]= "Loco morocho";
	printf("string %p\n", string);
	char *dup = ft_strdup(string);
	printf("dup %p\n", dup);
	printf("%s",dup);
	free (dup);

	
} */
