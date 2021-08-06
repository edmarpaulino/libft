/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:44:58 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/05 19:44:28 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list	*lst, void	(*f)(void *))
{
	t_list	*node;

	if (lst && f)
	{
		node = lst;
		while (node)
		{
			f(node->content);
			node = node->next;
		}
	}
}
