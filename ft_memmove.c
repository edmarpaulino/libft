/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 10:31:29 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/03 10:33:03 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	unsigned char	*uc_dst;
	unsigned char	*uc_src;

	uc_dst = (unsigned char *)dst;
	uc_src = (unsigned char *)src;
	if (dst > src)
	{
		uc_dst += (len - 1);
		uc_src += (len - 1);
		while (len--)
			*(uc_dst--) = *(uc_src--);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
