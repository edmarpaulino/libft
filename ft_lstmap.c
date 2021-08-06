/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:55:30 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/05 19:44:57 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_elem;
	t_list	*node;

	if (!lst)
		return (NULL);
	new_elem = 0;
	while (lst)
	{
		node = ft_lstnew((*f)(lst->content));
		if (!node)
			ft_lstclear(&node, (*del));
		else
			ft_lstadd_back(&new_elem, node);
		lst = lst->next;
	}
	return (new_elem);
}
