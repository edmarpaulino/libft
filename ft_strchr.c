/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 14:41:28 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/03 14:41:30 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int	c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		++s;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
