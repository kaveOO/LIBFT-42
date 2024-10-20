/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 06:04:10 by albillie          #+#    #+#             */
/*   Updated: 2024/10/21 01:11:07 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len) // TODO Refaire la function
{
	size_t	i;
	size_t	i2;

	if (!*little)
		return ((char *) big);
	i = 0;
	while (big[i] && i < len)
	{
		i2 = 0;
		if (!little[i2])
		{
			return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char *big = "hello";
	char *little = "world";

	printf("%s\n", ft_strnstr(big, little, 4));
}
*/
