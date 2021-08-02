#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	size_t	len;
	char	*s2;

	len = (ft_strlen(s1) + 1);
	if (len == 0)
		return (0);
	s2 = (char *)malloc(len * sizeof(*s1));
	if (s2 == 0)
		return (0);
	ft_strlcpy(s2, s1, len);
	return (s2);
}
