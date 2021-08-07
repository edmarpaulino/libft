/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 14:45:11 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/07 13:34:27 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	DESCRIPTION
*	The memchr() function locates the first occurrence of c (converted to
*	an unsigned char) in string s.
*
*	RETURN VALUES
*	The memchr() function returns a pointer to the byte located, or NULL if
*	no such byte exists within n bytes.
*/

void	*ft_memchr(const void	*s, int	c, size_t	n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		++s;
	}
	return (NULL);
}
