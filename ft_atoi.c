#include "libft.h"

static int	ft_iswhitespace(int	c)
{
	if ((c >= 9 && c <= 13) || c == 32 )
		return (FT_SUCCESS);
	return (FT_FAILED);
}

int	ft_atoi(const char	*str)
{
	signed char	sign;
	int			num;

	sign = 1;
	num = 0;
	while (ft_iswhitespace(*str))
		++str;
	if(*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		++str;
	}
	while (ft_isdigit(*str))
		num = (num * 10) + (*(str++) - '0');
	return (num * sign);
}
