/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 10:30:35 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/04 21:03:49 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t	n)
{
	unsigned char	*ptr;

	if (!dst && !src)
		return (NULL);
	ptr = (unsigned char *)dst;
	while (n--)
		*(ptr++) = *(unsigned char *)(src++);
	return (dst);
}
