#include "libft.h"

int	ft_isdigit(int	c)
{
	if (c >= '0' && c <= '9')
		return (FT_SUCCESS);
	return (FT_FAILED);
}
