/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:32:21 by albillie          #+#    #+#             */
/*   Updated: 2024/10/17 22:53:13 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t    dstLen;
    size_t    srcLen;
    size_t    n;
    size_t    i;

    dstLen = ft_strlen(dst);
    srcLen = ft_strlen(src);
    if (size <= dstLen)
        return (size + srcLen);
    n = size - dstLen - 1;
    i = 0;
    while (i < n && src[i])
    {
        dst[dstLen + i] = src[i];
        i++;
    }
    dst[dstLen + i] = '\0';
    return (dstLen + srcLen);
}

/*
int	main()
{
	char dst[] = "test";
	char src[] = "KACVEO";

	ft_strlcat(dst, src, 4);

	printf("%s\n", dst);
}
*/
