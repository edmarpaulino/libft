/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:44:42 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/05 20:22:46 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list	**lst, void	(*del)(void *))
{
	t_list	*node;

	if (lst && del)
	{
		while (*lst)
		{
			node = *lst;
			*lst = (*lst)->next;
			ft_lstdelone(node, del);
		}
		*lst = 0;
	}
}
