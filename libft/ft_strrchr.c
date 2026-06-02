/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:08:05 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/21 13:54:22 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (0 <= i)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/* #include <stdio.h>
#include <string.h>


int	main (void)
{
	int c;
	
	char s[] = "Mikel";
	c = 'M';
	
	char *resultado = ft_strrchr(s, c);
	char *resultado_original = strrchr(s, c);
	
	if (resultado != NULL)
		printf("La cadena a partir de eso es: %s\n",resultado);
	else
		printf("Resultado no encontrado");

	if (resultado_original != NULL)
		printf("La cadena a partir de eso es: %s\n",resultado_original);
	else
		printf("Resultado no encontrado");
	
	return (0);
}
 */