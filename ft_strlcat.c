#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	while (*dst)
		++dst;
	while (--dstsize > 0 && *src)
		*(dst++) = *src++;
	*(dst) = '\0';
	return (dst_len + src_len);
}
