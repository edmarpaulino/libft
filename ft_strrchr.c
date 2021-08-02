#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ptr = (char *)s;
		++s;
	}
	if (*s == (char)c)
		ptr = (char *)s;
	return (ptr);
}
