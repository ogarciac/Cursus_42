/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orlgarci <orlgarci@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 12:08:45 by orlgarci          #+#    #+#             */
/*   Updated: 2026/11/01 12:08:45 by orlgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	words;

	if (c == '\0')
		return (*s != '\0');
	words = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			words++;
			while (*s && *s != c)
				s++;
		}
	}
	return (words);
}

static void	free_words(char **words, size_t count)
{
	while (count > 0)
		free(words[--count]);
	free(words);
}

static char	*copy_word(char const *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(end - start + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static int	fill_words(char **words, char const *s, char c, size_t count)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	end = 0;
	while (i < count)
	{
		while (s[end] && s[end] == c)
			end++;
		start = end;
		while (s[end] && (c == '\0' || s[end] != c))
			end++;
		words[i] = copy_word(s, start, end);
		if (!words[i])
		{
			free_words(words, i);
			return (0);
		}
		i++;
	}
	words[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	if (!fill_words(words, s, c, word_count))
	{
		free(words);
		return (NULL);
	}
	return (words);
}
