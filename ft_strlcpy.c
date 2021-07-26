#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char	*src, size_t	dstsize)
{
	char	*aux_src;
	size_t	srcsize;
	size_t	aux_size;

	aux_src = (char *)src;
	srcsize = ft_strlen(src);
	if (dstsize > 0)
	{
		while (--dstsize > 0 && *src)
			*(dst++) = *(src++);
		*dst = '\0';
	}
	aux_size = ft_strlen(aux_src);
	if (srcsize > aux_size)
		return (srcsize);
	return (aux_size);
}
