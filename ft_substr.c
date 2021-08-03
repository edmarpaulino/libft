/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:20:16 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/03 15:21:11 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_start_len;

	if (!s)
		return (NULL);
	if (ft_strlen(s) > start)
	{
		s_start_len = ft_strlen((s + start));
		if (s_start_len < len)
			len = s_start_len;
		++len;
	}
	else
		return (ft_strdup(""));
	sub = (char *)malloc(len * sizeof(*sub));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, (s + start), len);
	return (sub);
}
