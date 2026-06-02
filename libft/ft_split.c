/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtapiado <mtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:12:42 by mtapiado          #+#    #+#             */
/*   Updated: 2026/05/26 10:51:58 by mtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == sep)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && s[i] != sep)
			i++;
	}
	return (count);
}

static size_t	word_len(char const *s, char sep)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != sep)
		i++;
	return (i);
}

static char	*make_word(char const *s, char c)
{
	char	*word;
	size_t	len;
	size_t	i;

	len = word_len(s, c);
	word = malloc(len + 1);
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_array(char **array, size_t words)
{
	size_t	i;

	i = 0;
	while (i < words)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	j;

	if (s == NULL)
		return (NULL);
	array = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (array == NULL)
		return (NULL);
	j = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			array[j] = make_word(&*s, c);
			if (array[j] == NULL)
				return (free_array(array, j), NULL);
			j++;
		}
		while (*s != '\0' && *s != c)
			s++;
	}
	array[j] = NULL;
	return (array);
}

/* int main (void)
{
	char array[50] = "Hola me           llamo Mikel       ";
	char ** string;
	size_t i;

	i = 0;
	string = ft_split(array, ' ');
	while (string[i] != NULL)
	{
		printf("%s\n",string[i]);
		i++;
	}
} */