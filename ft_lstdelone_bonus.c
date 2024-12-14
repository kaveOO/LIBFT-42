/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaveo <kaveo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 01:42:04 by albillie          #+#    #+#             */
/*   Updated: 2024/12/14 06:14:43 by kaveo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	delete_element(void *element)
{
	if (element)
	{
		free(element);
	}
}

void	ft_lstdelone(t_list *lst, void (*del) (void*))
{
	if (lst == NULL)
		return ;
	while (lst->next != NULL)
	{
		del(lst->content);
		lst = lst->next;
	}
}

int main()
{
	t_list *list;

	list = ft_lstnew("kaveO");
	ft_lstadd_front(&list, ft_lstnew("albillie"));
	ft_lstadd_front(&list, ft_lstnew("gbruscan"));
	ft_lstadd_front(&list, ft_lstnew("j'adore les chats"));
	ft_lstdelone(list, delete_element);


	// printf("%s\n", (char *) list->content);
}
