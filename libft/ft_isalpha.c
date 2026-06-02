/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 10:32:36 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/27 09:45:02 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/* #include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", isalpha('A'));
	printf("%d\n", isalpha('z'));
	printf("%d\n", isalpha('1'));
	printf("%d\n", isalpha('@'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isalpha('z'));
	printf("%d\n", ft_isalpha('1'));
	printf("%d\n", ft_isalpha('@'));
	return (0);
} */