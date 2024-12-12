/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 07:41:34 by albillie          #+#    #+#             */
/*   Updated: 2024/12/12 08:15:33 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *list;

	list = malloc(sizeof(t_list));
	list->content = content;
	list->next = NULL;
	return (list);
}
/* int main()
{
	t_list *list;
	list = ft_lstnew("test");

	char *result = list->content;
	printf("%s\n", result);
} */
