/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 03:04:45 by albillie          #+#    #+#             */
/*   Updated: 2024/10/20 07:34:24 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	i2;

	str = (char *) malloc (sizeof(*s) * (len + 1));
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
	str[i2] = '0';
	return (str);
}
