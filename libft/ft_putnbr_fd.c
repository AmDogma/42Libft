#include "libft.h"

static void	ft_recursion(int n, int fd)
{
	if (n > -10 && n < 0)
		ft_putchar_fd(-n + 48, fd);
	else if (n < 10 && n > -1)
		ft_putchar_fd(n + 48, fd);
	else
	{
		ft_recursion(n / 10, fd);
		ft_recursion(n % 10, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	ft_recursion(n, fd);
}
