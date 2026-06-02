/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 12:04:21 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/25 17:49:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*array;

	nb = n;
	len = count_digits(nb);
	array = malloc(len + 1);
	if (array == NULL)
		return (NULL);
	array[len] = '\0';
	if (nb == 0)
		array[0] = '0';
	if (nb < 0)
	{
		array[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		len--;
		array[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (array);
}
