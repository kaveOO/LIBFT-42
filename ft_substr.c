/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 03:04:45 by albillie          #+#    #+#             */
/*   Updated: 2024/10/21 01:16:02 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	i2;

	str = (char *) malloc (len + 1);
	i = 0;
	i2 = 0;
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && i2 < len)
		{
			str[i2] = s[i];
			i2++;
		}
		i++;
	}
	str[i2] = 0;
	return (str);
} */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	i;
	size_t	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	if (len > str_len - start)
		len = str_len - start;
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		copy[i] = s[start + i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/* int main()
{
	char *string = "Hello, World!";

	char *result = ft_substr(string, 7, 5);

	printf("%s\n", result);
} */
