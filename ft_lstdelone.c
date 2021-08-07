/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:44:38 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/07 14:11:40 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	Takes as a parameter an element and frees the memory of the element’s
*	content using the function ’del’ given as a parameter and free the element.
*	The memory of ’next’ must not be freed.
*/

void	ft_lstdelone(t_list	*lst, void	(*del)(void *))
{
	t_list	*elem;

	if (lst && (*del))
	{
		elem = lst;
		lst = lst->next;
		(*del)(elem->content);
		free(elem);
	}
}
