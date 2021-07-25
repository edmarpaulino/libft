#include "libft.h"

int	ft_isalpha(int	c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (FT_SUCCESS);
	return (FT_FAILED);
}
