#ifndef FT_H
# define FT_H

int			ft_isalpha(int	c);
int			ft_isdigit(int	c);
int			ft_isalnum(int	c);
int			ft_isascii(int	c);
int			ft_isprint(int	c);
long int	ft_strlen(const char	*s);
void		*ft_memset(void	*b, int	c, long int	len);
void		ft_bzero(void	*s, long int	n);
void		*ft_memcpy(void	*dst, void	*src, long int	n);

#endif
