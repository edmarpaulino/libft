#include "libft.h"

char	*ft_strrchr(const char	*s, int	c)
{
	char	*str;
	char	*ptr;

	str = (char *)s;
	ptr = NULL;
	while (*str)
	{
		if (*str == (char)c)
			ptr = str;
		++str;
	}
	if (*str == (char)c)
		ptr = str;
	return (ptr);
}
