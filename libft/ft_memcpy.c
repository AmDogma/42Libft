#include "libft.h"

void	*ft_memcpy(void *dest, const void *cpy, size_t n)
{
	size_t				i;
	unsigned char	*dubl;

	i = 0;
	dubl = (unsigned char *)dest;
	while (n > i)
	{
		dubl[i] = *((unsigned char *)cpy + i);
		i++;
	}
	return (dubl);
}
