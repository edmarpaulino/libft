#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	unsigned char	*uc_dst;
	unsigned char	*uc_src;

	uc_dst = (unsigned char *)dst;
	uc_src = (unsigned char *)src;
	if (dst > src)
	{
		uc_dst += (len - 1);
		uc_src += (len - 1);
		while (len-- > 0)
			*(uc_dst--) = *(uc_src--);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
