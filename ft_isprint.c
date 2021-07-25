#include "libft.h"

int	ft_isprint(int	c)
{
	if (c >= ' ' && c <= '~')
		return (FT_SUCCESS);
	return (FT_FAILED);
}
