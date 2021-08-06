/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:33:52 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/04 16:40:24 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
