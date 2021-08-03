/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 14:42:33 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/03 14:43:34 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	char	*ps;

	ps = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ps = (char *)s;
		++s;
	}
	if (*s == (char)c)
		ps = (char *)s;
	return (ps);
}
