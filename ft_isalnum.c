#include "libft.h"

int	ft_isalnum(int	c)
{
	if ((c >= '0' && c <= '9') \
		|| (c >= 'A' && c <= 'Z') \
		|| (c >= 'a' && c <= 'z'))
		return (FT_SUCCESS);
	return (FT_FAILED);
}
