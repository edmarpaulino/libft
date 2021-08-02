#include "libft.h"

char	*ft_substr(const char	*s, unsigned int	start, size_t	len)
{
	char	*sub;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if ((start + len) > s_len)
		len = (s_len - start);
	++len;
	sub = (char *)malloc(len * sizeof(*sub));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, (s + start), len);
	return (sub);
}
