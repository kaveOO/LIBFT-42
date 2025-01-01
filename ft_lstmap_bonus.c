/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaveo <kaveo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:14:06 by albillie          #+#    #+#             */
/*   Updated: 2025/01/01 20:29:22 by kaveo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	delete_func(void *data)
// {
// 	data = NULL;
// 	free(data);
// }

// void	*print_data(void *data)
// {
// 	printf("%s\n", (char *) data);
// 	return (data);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_obj;
	t_list	*new_list;

	if (!del || !f || !lst)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_obj = ft_lstnew(f(lst->content));
		if (!new_obj)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_obj);
		lst = lst->next;
	}
	return (new_list);
}
// int main()
// {
// 	t_list *list;

// 	list = ft_lstnew("albillie");
// 	ft_lstadd_back(&list, ft_lstnew("gbruscan"));
// 	ft_lstadd_back(&list, ft_lstnew("anoteris"));
// 	ft_lstadd_back(&list, ft_lstnew("cantina"));
// 	ft_lstadd_back(&list, ft_lstnew("manger"));

// 	ft_lstmap(list, print_data, delete_func);
// }
