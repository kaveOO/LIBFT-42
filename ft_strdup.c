/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 02:08:31 by albillie          #+#    #+#             */
/*   Updated: 2024/10/20 02:59:35 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*newstr;

	slen = ft_strlen(s) + 1;
	newstr = malloc(slen);
	if (!newstr)
	{
		return (NULL);
	}
	ft_memcpy(newstr, s, slen);
	return (newstr);
}
/*
int main()
{
	char string[] = "TEST";

	char *result = ft_strdup(string);

	printf("%s\n", result);
}
*/
