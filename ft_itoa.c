#include "libft.h"

static int	ft_intlen(int	n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		n /= 10;
		++len;
	}
	return (len);
}

static char	*ft_convert(int	n, char	*str)
{
	int		len;

	if (n < 0)
	{
		n *= -1;
		len = (ft_intlen(n) + 2);
		str = (char *)malloc(len * sizeof(*str));
		if (str == 0)
			return (0);
		str[0] = '-';
	}
	else
	{
		len = (ft_intlen(n) + 1);
		str = (char *)malloc(len * sizeof(*str));
		if (str == 0)
			return (0);
	}
	str[--len] = '\0';
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int	n)
{
	char	*str;

	str = 0;
	if (n == -2147483648)
	{
		str = (char *)malloc(12 * sizeof(*str));
		if (str == 0)
			return (0);
		ft_strlcpy(str, "-2147483648", 12);
	}
	else if (n == 0)
	{
		str = (char *)malloc(2 * sizeof(*str));
		if (str == 0)
			return (0);
		ft_strlcpy(str, "0", 2);
	}
	else
		str = ft_convert(n, str);
	return (str);
}