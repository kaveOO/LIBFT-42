/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 02:00:38 by albillie          #+#    #+#             */
/*   Updated: 2024/10/22 02:47:22 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
		{
			s++;
		}
		if (*s)
		{
			count++;
		}
		while (*s && *s != c)
		{
			s++;
		}
	}
	return (count);
}
static	int	ft_safe_malloc(char **token_v, int position, size_t buffer)
{
	int	i;

	i = 0;
	token_v[position] = malloc(buffer);
	if (!token_v[position])
	{
		while (i < position)
		{
			free(token_v[i++]);
		}
		free(token_v);
		return (1);
	}
	return (0);
}
static	int	ft_fill(char **words_v, const char *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;

		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			len++;
			s++;
		}
		if (len)
		{
			ft_safe_malloc(words_v, i, len + 1);
			return (1);
		}
		ft_strlcpy(words_v[i], s - len, len + 1);
	}
	return (0);
}
char **ft_split(char const *s, char c)
{
	size_t	words;
	char	**words_v;

	if (!s)
		return (NULL);
	words = 0;
	words = ft_count_words(s, c);
	words_v = malloc ((words + 1) * sizeof(char *));
	if (!words_v)
		return (NULL);
	words_v[words] = NULL;
	if (ft_fill(words_v, s, c))
	{
		return (NULL);
	}
	return (words_v);
}
/* int	main()
{
	char *string = "           Bonjour tout le monde!";
	char **result = ft_split(string, ' ');

	while (*result)
	{
		printf("%s\n", *result++);
	}
} */
