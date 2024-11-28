/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_opened.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:44:43 by albillie          #+#    #+#             */
/*   Updated: 2024/11/23 11:47:43 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

bool	check_if_opened(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd > 0)
	{
		return true;
	}
	return false;
}
