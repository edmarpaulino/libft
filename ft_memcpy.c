#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t	n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dst;
	while (n-- > 0)
	{
		*ptr = *(unsigned char *)src;
		++ptr;
		++src;
	}
	return (dst);
}
