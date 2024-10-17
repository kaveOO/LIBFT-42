/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:31:43 by albillie          #+#    #+#             */
/*   Updated: 2024/10/17 01:53:52 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}


//#include "libft.h"
//#include "libft.h"
//#include "libft.h"
//#include "libft.h"
//#include "libft.h"

/*
int main(int argc, char **argv)
{
	(void) argc;

	printf("%zu\n", ft_strlen(argv[1]));
}
*/
