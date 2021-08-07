/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 10:20:56 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/07 13:34:01 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	The memset() function writes len bytes of value c (converted to an
*	unsigned char) to the string b.
*
*	RETURN VALUES
*	The memset() function returns its first argument.
*/

void	*ft_memset(void	*b, int	c, size_t	len)
{
	unsigned char	*pb;

	pb = (unsigned char *)b;
	while (len--)
		*(pb++) = (unsigned char)c;
	return (b);
}
