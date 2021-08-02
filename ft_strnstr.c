#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	while (*haystack && len-- > needle_len)
	{
		if (!ft_strncmp(haystack, needle, needle_len))
			return ((char *)haystack);
		++haystack;
	}
	return (0);
}
