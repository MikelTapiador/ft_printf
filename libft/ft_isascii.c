/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 11:17:28 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/27 09:45:10 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/* #include <ctype.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	printf("%d\n", isascii('A'));
	printf("%d\n", isascii(128));
	printf("%d\n", isascii('1'));
	printf("%d\n", isascii('@'));
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii('1'));
	printf("%d\n", ft_isascii('@'));
	return (0);
} */