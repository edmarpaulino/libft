#include "libft.h"

char	*ft_strtrim(char const	*s1, char const *set)
{
	size_t	s1_len;
	size_t	set_len;
	size_t	end;
	char	*str_trim;

	s1_len = ft_strlen((char *)s1);
	set_len = ft_strlen((char *)set);
	end = s1_len - set_len;
	if (!ft_strncmp(s1, set, set_len) && !ft_strncmp((s1 + end), set, set_len))
	{
		str_trim = (char *)malloc((s1_len - (set_len * 2) + 1) * sizeof(char));
		if (str_trim == NULL)
			return (NULL);
		ft_strlcpy(str_trim, (s1 + set_len), (s1_len - (set_len * 2) + 1));
		return (str_trim);
	}
	return (NULL);
}
