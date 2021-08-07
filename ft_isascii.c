/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 10:18:25 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/07 13:35:06 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	The isascii() function tests for an ASCII character, which is any
*	character between 0 and octal 0177 inclusive.
*/

int	ft_isascii(int	c)
{
	if (c >= 0 && c <= 127)
		return (FT_SUCCESS);
	return (FT_FAILED);
}
