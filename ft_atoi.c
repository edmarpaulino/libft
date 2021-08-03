/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edpaulin <edpaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 15:02:51 by edpaulin          #+#    #+#             */
/*   Updated: 2021/08/03 15:09:20 by edpaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_iswhitespace(int	c)
{
	return ((c >= 9 && c <= 13) || c == 32 );
}

int	ft_atoi(const char	*str)
{
	signed char		sign;
	unsigned int	nbr;

	sign = 1;
	nbr = 0;
	while (ft_iswhitespace(*str))
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while (ft_isdigit(*str))
		nbr = (nbr * 10) + (*(str++) - '0');
	return (nbr * sign);
}
