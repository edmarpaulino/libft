/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:16:06 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/03 15:16:22 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	size_t	len;
	char	*s2;

	len = (ft_strlen(s1) + 1);
	s2 = (char *)malloc(len * sizeof(*s1));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, len);
	return (s2);
}
