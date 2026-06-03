/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:21:36 by mtapiado          #+#    #+#             */
/*   Updated: 2026/06/03 09:30:26 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(char const *format, ...);
int		ft_putstring(char *string);
int		ft_putnbr_base(int nbr, char *base);
int		ft_putnbr_base_un(unsigned int nbr, char *base);
int		ft_putnbr_base_ptr(unsigned long nbr, char *base);
int		ft_putpointer(void *ptr);

#endif