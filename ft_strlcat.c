#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		++dst_len;
	if (dstsize <= dst_len)
		return (src_len + dstsize);
	dst += dst_len;
	while (--dstsize > dst_len && *src)
		*(dst++) = *(src++);
	*dst = '\0';
	return (dst_len + src_len);
}
