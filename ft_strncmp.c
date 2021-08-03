/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 14:43:56 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/03 14:58:49 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, size_t	n)
{
	while (*s1 && *s2 && *s1 == *s2 && n--)
	{
		++s1;
		++s2;
	}
	if (!n)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
