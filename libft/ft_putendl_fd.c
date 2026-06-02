/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:20:11 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/26 12:27:29 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}

/* int main (void)
{
	char c[] = "Hola caracola";
	int fd;
	
	fd = 1;
	
	ft_putendl_fd(c,fd);
	ft_putendl_fd(c,fd);
	ft_putendl_fd(c,fd);
	ft_putendl_fd(c,fd);
	ft_putendl_fd(c,fd);
	ft_putendl_fd(c,fd);

} */
