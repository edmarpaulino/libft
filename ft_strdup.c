#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	size_t	s1_len;
	char	*s2;

	s1_len = ft_strlen(s1);
	if (s1_len == 0)
		return (NULL);
	s2 = (char *)malloc(s1_len * sizeof(*s1));
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1, (s1_len + 1));
	return (s2);
}
