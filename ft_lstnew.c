/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:33:52 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/07 13:57:16 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	Allocates (with malloc(3)) and returns a new element. The variable
*	’content’ is initialized with the value of the parameter ’content’. The
*	variable ’next’ is initialized to NULL.
*
*	RETURN VALUES
*	The new element.
*/

t_list	*ft_lstnew(void	*content)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(*new_elem));
	if (new_elem)
	{
		new_elem->content = content;
		new_elem->next = 0;
	}
	return (new_elem);
}
