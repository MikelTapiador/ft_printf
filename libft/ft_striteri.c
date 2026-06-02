/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:54:03 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/26 19:10:40 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/* void	eventoupper(unsigned int i, char *c)
{
	if ((i % 2 == 0) && (*c >= 97 && *c <= 122))
		*c = *c - 32;
}
int	main  (void)
{
	char string[] = "supercalifragilisticoespialidoso";

	ft_striteri(string,eventoupper);

	printf("%s\n", string);
} */