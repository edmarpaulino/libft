#include "libft.h"

static void	ft_putnbr(int	n, int	fd)
{
	char	str[11];
	int		nbr;
	int		i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		str[i++] = '-';
	}
	nbr = n;
	while (nbr)
	{
		++i;
		nbr /= 10;
	}
	str[i] = '\0';
	while (i-- && n)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
	}
	write(fd, str, ft_strlen(str));
}

void	ft_putnbr_fd(int	n, int	fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else
		ft_putnbr(n, fd);
}
