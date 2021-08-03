/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:08:24 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/03 15:08:26 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	needle_len;

	if (!needle[0])
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && len >= needle_len)
	{
		if (!ft_strncmp(haystack, needle, needle_len))
			return ((char *)haystack);
		++haystack;
		--len;
	}
	return (NULL);
}
