/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 11:34:10 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/19 12:02:23 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* #include <string.h>
#include <stdio.h>

int main (void)
{
	char str[] = "Mikel";
	printf("La longitud de %s es: %zu\n",str,strlen(str));
	printf("La longitud de %s es: %zu\n",str,ft_strlen(str));
} */
