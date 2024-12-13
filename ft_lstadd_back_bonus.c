/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 03:59:34 by albillie          #+#    #+#             */
/*   Updated: 2024/12/13 04:28:14 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// * Add new add end of list
// ? Navigate in the linked list until next one is null

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *current;

	current = (*lst);
	while (current != NULL)
	{
		if (current->next == NULL)
		{
			new = (*lst);
			(*lst) = new;
		}
		current = (*lst)->next;
	}
}

int main()
{
	t_list *list;

	list = ft_lstnew("j'adore les chats !");

	ft_lstadd_back(&list, ft_lstnew("test"));
	printf("%s\n", (char *) list->content);
}
