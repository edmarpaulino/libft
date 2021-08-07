/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:38:20 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/07 14:02:37 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	Returns the last element of the list.
*
*	RETURN VALUE
*	Last element of the list.
*/

t_list	*ft_lstlast(t_list	*lst)
{
	t_list	*last_elem;

	if (!lst)
		return (NULL);
	last_elem = lst;
	while (last_elem->next)
		last_elem = last_elem->next;
	return (last_elem);
}
