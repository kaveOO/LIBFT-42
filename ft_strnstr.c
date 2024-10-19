/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 06:04:10 by albillie          #+#    #+#             */
/*   Updated: 2024/10/19 03:41:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (big != little)
		{
			return (*big - *little);
		}
		i++;
	}
	return (NULL);
}



int main()
{
	const char big = "hello";
	const char little = "world";

	char *result = strnstr(big, little, 10);

	printf("%s\n", result);
}
