/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 02:00:38 by albillie          #+#    #+#             */
/*   Updated: 2024/10/24 06:13:02 by albillie         ###   ########.fr       */
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
static char	**ft_fill_array(const char *s, char c)
{
	char	**array;
	size_t	*word_len;
	size_t	i;

	while (*s)
	{
		if (*s == c)
			s++;
		
	}




}

char	**ft_split(char const *s, char c)
{
	size_t	words_count;

	words_count = malloc(ft_count_words(s, c) + 1);
}



int main()
{
	char *string = "je suis un test";

	int result = ft_count_words(string, 'T');
	printf("%d\n", result);
}
