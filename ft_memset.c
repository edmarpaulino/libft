void	*ft_memset(void	*b, int	c, long int	len)
{
	while (--len >= 0)
	{
		*(unsigned char *)b = (unsigned char)c;
		++b;
	}
	return (b);
}
