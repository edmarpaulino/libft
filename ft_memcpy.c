void	*ft_memcpy(void	*dst, void	*src, long int	n)
{
	while (n > 0)
	{
		dst = src;
		++dst;
		++src;
		--n;
	}
	return (dst);
}
