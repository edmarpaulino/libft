/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 10:31:29 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/07 13:34:06 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	The memmove() function copies len bytes from string src to string dst.
*	The two strings may overlap; the copy is always done in a
*	non-destructive manner.
*
*	RETURN VALUES
*	The memmove() function returns the original value of dst.
*/

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	unsigned char	*pd;

	pd = (unsigned char *)dst;
	if (dst > src)
	{
		while (len--)
			*(pd + len) = *(unsigned char *)(src + len);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
