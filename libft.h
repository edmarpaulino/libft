#ifndef LIBFT_H
# define LIBFT_H
# define FT_SUCCESS 1
# define FT_FAILED 0
# include <stddef.h>

int		ft_isalpha(int	c);
int		ft_isdigit(int	c);
int		ft_isalnum(int	c);
int		ft_isascii(int	c);
int		ft_isprint(int	c);
size_t	ft_strlen(const char	*s);
void	*ft_memset(void	*b, int	c, size_t	len);
void	ft_bzero(void	*s, size_t	n);
void	*ft_memcpy(void	*dst, const void	*src, size_t	n);
void	*ft_memmove(void	*dst, const void	*src, size_t	len);

#endif