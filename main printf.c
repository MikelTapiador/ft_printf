/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:49:42 by mtapiado          #+#    #+#             */
/*   Updated: 2026/06/03 11:01:31 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "ft_printf.h"
#include <stdio.h>*/
/*
int	main(void)
{
	int	a;
	int	b;

	a = ft_printf("Letra: %d\n", -42);
	b = printf("Letra: %d\n", -42);

	printf("ft_printf: %d\n", a);
	printf("printf:    %d\n", b);
	return (0);
} */

/* #include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = ft_printf("c:%c s:%s d:%d i:%i u:%u x:%x X:%X %%\n",
			'A', "Mikel", -42, 42, 4294967295u, 255, 255);
	b = printf("c:%c s:%s d:%d i:%i u:%u x:%x X:%X %%\n",
			'A', "Mikel", -42, 42, 4294967295u, 255, 255);
	printf("ft_printf: %d\n", a);
	printf("printf:    %d\n", b);
	return (0);
} */

/* #include "ft_printf.h"
#include <stdio.h>

int main (void)
{
	ft_printf("hola %");
	printf("hola %");
} */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	/*int	a;
	int	b;
	int	n;

	n = 42;

	printf("\n--- TEXTO SIMPLE ---\n");
	a = ft_printf("Hola mundo\n");
	b = printf("Hola mundo\n");
	printf("ft_printf: %d | printf: %d\n", a, b);

	printf("\n--- CHAR %%c ---\n");
	a = ft_printf("Letra: %c\n", 'A');
	b = printf("Letra: %c\n", 'A');
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("Char nulo: %c FIN\n", '\0');
	b = printf("Char nulo: %c FIN\n", '\0');
	printf("ft_printf: %d | printf: %d\n", a, b);

	printf("\n--- STRING %%s ---\n");
	a = ft_printf("Nombre: %s\n", "Mikel");
	b = printf("Nombre: %s\n", "Mikel");
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("String vacio: %s\n", "");
	b = printf("String vacio: %s\n", "");
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("String NULL: %s\n", (char *)NULL);
	b = printf("String NULL: %s\n", (char *)NULL);
	printf("ft_printf: %d | printf: %d\n", a, b);

	printf("\n--- DECIMAL %%d / %%i ---\n");
	a = ft_printf("Numero: %d\n", 42);
	b = printf("Numero: %d\n", 42);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("Negativo: %d\n", -42);
	b = printf("Negativo: %d\n", -42);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("Cero: %d\n", 0);
	b = printf("Cero: %d\n", 0);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("INT_MAX: %d\n", INT_MAX);
	b = printf("INT_MAX: %d\n", INT_MAX);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("INT_MIN: %d\n", INT_MIN);
	b = printf("INT_MIN: %d\n", INT_MIN);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("Con i: %i\n", -12345);
	b = printf("Con i: %i\n", -12345);
	printf("ft_printf: %d | printf: %d\n", a, b);

	printf("\n--- UNSIGNED %%u ---\n");
	a = ft_printf("Unsigned cero: %u\n", 0);
	b = printf("Unsigned cero: %u\n", 0);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("Unsigned normal: %u\n", 42);
	b = printf("Unsigned normal: %u\n", 42);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("Unsigned max: %u\n", UINT_MAX);
	b = printf("Unsigned max: %u\n", UINT_MAX);
	printf("ft_printf: %d | printf: %d\n", a, b);

	printf("\n--- HEXADECIMAL %%x / %%X ---\n");
	a = ft_printf("Hex lower: %x\n", 255);
	b = printf("Hex lower: %x\n", 255);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("Hex upper: %X\n", 255);
	b = printf("Hex upper: %X\n", 255);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("Hex cero: %x\n", 0);
	b = printf("Hex cero: %x\n", 0);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("Hex UINT_MAX: %x\n", UINT_MAX);
	b = printf("Hex UINT_MAX: %x\n", UINT_MAX);
	printf("ft_printf: %d | printf: %d\n", a, b);

	printf("\n--- POINTER %%p ---\n");
	a = ft_printf("Pointer: %p\n", &n);
	b = printf("Pointer: %p\n", &n);
	printf("ft_printf: %d | printf: %d\n", a, b);

	a = ft_printf("Pointer NULL: %p\n", NULL);
	b = printf("Pointer NULL: %p\n", NULL);
	printf("ft_printf: %d | printf: %d\n", a, b);

	printf("\n--- PORCENTAJE %%%% ---\n");
	a = ft_printf("Porcentaje: %%\n");
	b = printf("Porcentaje: %%\n");
	printf("ft_printf: %d | printf: %d\n", a, b);

	printf("\n--- TODO JUNTO ---\n");
	a = ft_printf("c:%c s:%s d:%d i:%i u:%u x:%x X:%X p:%p %%\n",
			'A', "Mikel", -42, 42, UINT_MAX, 255, 255, &n);
	b = printf("c:%c s:%s d:%d i:%i u:%u x:%x X:%X p:%p %%\n",
			'A', "Mikel", -42, 42, UINT_MAX, 255, 255, &n);
	printf("ft_printf: %d | printf: %d\n", a, b);*/
	
	char *str;
	int	mio;
	int	suyo;
	str = "Hola";
	suyo = printf("hhhh%d %i %u %p %x %X %s %c %p %s %%", INT_MIN, INT_MIN, INT_MIN, str, 12345, 12345, str, 'c', NULL, (char *)NULL);
	printf("\n");
	mio = ft_printf("hhhh%d %i %u %p %x %X %s %c %p %s %%", INT_MIN, INT_MIN, INT_MIN, str, 12345, 12345, str, 'c', NULL, (char *)NULL);
	ft_printf("\nMio: %d  ||  Suyo: %d", mio, suyo);
	ft_printf(NULL);
	return (0);
}