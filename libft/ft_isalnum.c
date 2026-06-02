/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 11:00:13 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/27 09:44:47 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
	{
		return (1);
	}
	return (0);
}
/* #include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", isalnum('A'));
	printf("%d\n", isalnum('z'));
	printf("%d\n", isalnum('1'));
	printf("%d\n", isalnum('@'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('z'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('@'));
	return (0);
} */