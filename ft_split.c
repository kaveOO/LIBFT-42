/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 02:00:38 by albillie          #+#    #+#             */
/*   Updated: 2024/10/25 20:45:13 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	count;

	if (!s)
	{
		return (0);
	}
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

static char	*ft_word_filler(const char *s, char c)
{
	char	*word;
	size_t	i;

	if (!word)
		return (0);
	i = 0;
	while (*s)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;

	array = malloc(ft_count_words(s, c));
	if (!array)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		while (*s)
		{
			while (*s && *s != c)
			{
				ft_word_filler(s, c);
			}
		}
	}
}


int main()
{
	char *string = "Feu Cle Noir";

	char *result = ft_word_filler(string, ' ');

	printf("%s\n", result);
}
