/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albillie <albillie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:14:06 by albillie          #+#    #+#             */
/*   Updated: 2024/12/16 12:22:26 by albillie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	delete_func(void *data)
{
	data = NULL;
	free(data);
}

void	print_data(void *data)
{
	printf("%s\n", data);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;

	list = lst;
	if (!lst || !f || !del)
		return (NULL);
	while (list)
	{
		f(list->content);
		list = list->next;
	}
	return (list);
}
int main()
{
	t_list *list;

	list = ft_lstnew("albillie");
	ft_lstadd_back(&list, ft_lstnew("gbruscan"));
	ft_lstadd_back(&list, ft_lstnew("anoteris"));
	ft_lstadd_back(&list, ft_lstnew("cantina"));
	ft_lstadd_back(&list, ft_lstnew("manger"));

}
