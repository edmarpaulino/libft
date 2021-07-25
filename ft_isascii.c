#include "libft.h"

int	ft_isascii(int	c)
{
	if (c >= 0 && c <= 127)
		return (FT_SUCCESS);
	return (FT_FAILED);
}
