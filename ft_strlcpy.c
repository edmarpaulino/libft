#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	srcsize;

	if (!src)
		return (0);
	srcsize = ft_strlen(src);
	if (dstsize)
	{
		while (--dstsize && *src)
			*(dst++) = *(src++);
		*dst = '\0';
	}
	return (srcsize);
}
