#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new_str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (s1_len == 0 && s2_len == 0)
		return (NULL);
	new_str = (char *)ft_calloc((s1_len + s2_len + 1), sizeof(*new_str));
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s1, (s1_len + 1));
	ft_strlcpy((new_str + s1_len), s2, (s2_len + 1));
	return (new_str);
}
