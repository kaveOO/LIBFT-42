/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 07:53:28 by albillie          #+#    #+#             */
/*   Updated: 2024/10/20 08:14:30 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}
void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, 1);
		ft_putnbr_fd(n % 10, 1);
	}
	ft_putchar(n + '0', fd);
}
/*
int main()
{
	ft_putnbr_fd(2147483647, 1);
}
*/
