/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:44:35 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/04 16:47:16 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*elem;

	if (lst && new)
	{
		if (*lst)
		{
			elem = ft_lstlast(*lst);
			elem->next = new;
		}
		else
			*lst = new;
	}
}
