#include "libft.h"

void	*ft_memchr(void *dest, int ch, size_t n)
{
	size_t			i;
	unsigned char	*dubl;

	i = 0;
	dubl = (unsigned char *)dest;
	while (n > i)
	{
		if (dubl[i] == (unsigned char)ch)
			return (dubl + i);
		i++;
	}
	return (NULL);
}
