/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 00:52:22 by albillie          #+#    #+#             */
/*   Updated: 2024/10/21 01:06:43 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		i2;

	if (!s1 || !s2)
		return (NULL);
	result = (char *) malloc (sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!result)
		return (NULL);
	i = -1;
	while (s1[++i])
		result[i] = s1[i];
	i2 = -1;
	while (s2[++i2])
		result[i + i2] = s2[i2];
	result[i + i2] = '\0';
	return (result);
}
