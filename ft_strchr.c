/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:53:14 by albillie          #+#    #+#             */
/*   Updated: 2024/10/18 00:37:06 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char) c;
	while (*s)
	{
		if (*s == ch)
		{
			return ((char *) s);
		}
		s++;
	}
	if (!ch)
	{
		return ((char *) s);
	}
	return (NULL);
}
/*
int	main()
{
	char *s = "Hello World!";
	char ch = '\0';
	char *result = ft_strchr(s, ch);


	printf("%s\n", result);
	printf("Character '%c' found at position : %ld\n", ch, result - s);
}
*/
