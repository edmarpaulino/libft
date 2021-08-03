/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 10:20:56 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/03 10:28:40 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int	c, size_t	len)
{
	unsigned char	*pb;

	pb = (unsigned char *)b;
	while (len--)
		*(pb++) = (unsigned char)c;
	return (b);
}
