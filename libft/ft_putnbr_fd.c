#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	*s;

	s = ft_itoa(n);
	i = 0;
	while (*s)
		write(fd, s++, 1);
}
