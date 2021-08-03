/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 10:17:04 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/03 10:18:15 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int	c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (FT_SUCCESS);
	return (FT_FAILED);
}
