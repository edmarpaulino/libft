void	ft_bzero(void	*s, long int	n)
{
	while (--n >= 0)
	{
		*(char *)s = 0;
		++s;
	}
}
