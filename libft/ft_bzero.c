#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	size_t				i;
	unsigned char	*dubl;

	i = 0;
	dubl = (unsigned char *)dest;
	if (dest)
	{
		while (n > i)
		{
			dubl[i] = 0;
			i++;
		}
	}
}
