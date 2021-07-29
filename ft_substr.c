#include "libft.h"

char	*ft_substr(const char	*s, unsigned int	start, size_t	len)
{
	char	*sub;
	size_t	sub_len;

	if (s[start] == '\0' || len == 0)
		return (NULL);
	sub_len = ft_strlen(&s[start]);
	if (len > sub_len)
		len = (sub_len + 1);
	sub = (char *)ft_calloc(len, sizeof(*sub));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, &s[start], len);
	return (sub);
}
