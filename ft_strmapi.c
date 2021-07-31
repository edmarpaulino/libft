#include "libft.h"

char	*ft_strmapi(char const	*s, char	(*f)(unsigned int, char))
{
	size_t			len;
	char			*str;
	unsigned int	i;

	if (!s)
		return (0);
	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(*str));
	if (!str)
		return (0);
	i = 0;
	str = (char *)s;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		++i;
	}
	return (str);
}
