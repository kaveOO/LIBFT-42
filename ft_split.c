/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 02:00:38 by albillie          #+#    #+#             */
/*   Updated: 2024/10/22 04:38:08 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static int	ft_safe_malloc(char **words_v, int position, size_t buffer)
{
	int	i;

	i = 0;
	words_v[position] = malloc(buffer);
	if (!words_v[position])
	{
		while (i < position)
			free(words_v[i++]);
		free(words_v);
		return (1);
	}
	return (0);
}

static int	ft_fill(char **words_v, const char *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s == c)
			s++;
		while (s[len] && s[len] != c)
			len++;
		if (len)
		{
			if (ft_safe_malloc(words_v, i, len + 1))
				return (1);
			ft_strlcpy(words_v[i], s, len + 1);
			i++;
			s += len;
		}
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**words_v;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	words_v = malloc((words + 1) * sizeof(char *));
	if (!words_v)
		return (NULL);
	words_v[words] = NULL;
	if (ft_fill(words_v, s, c))
		return (NULL);
	return (words_v);
}
/*
int	main()
{
	char *string = "           Bonjour tout le monde!";
	char **result = ft_split(string, ' ');

	while (*result)
	{
		printf("%s\n", *result++);
	}
}
*/
