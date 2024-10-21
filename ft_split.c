/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 02:00:38 by albillie          #+#    #+#             */
/*   Updated: 2024/10/21 05:18:36 by albillie         ###   ########.fr       */
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










int main()
{
	char	*string;
	string = "testptestptestpppppppTEST";

	printf("%ld\n", ft_count_words(string, 'p'));
}

/*
char **ft_split(char const *s, char c)
{
}
*/

