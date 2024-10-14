/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:31:43 by albillie          #+#    #+#             */
/*   Updated: 2024/10/14 22:36:22 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int i;
	i = 0;
	
	while (s[i] != '\0')
		i++;
	return (i);
}

int main()
{
	printf("%zu\n", ft_strlen("re"));
}