#include "libft.h"

void	*ft_memccpy(void *dest, const void *cpy, int ch, size_t n)
{
	size_t				i;
	unsigned char	*dubl;

	i = 0;
	dubl = (unsigned char *)dest;
	while (n > i)
	{
		if (*((unsigned char *)cpy + i) == ch)
			break ;
		dubl[i] = *((unsigned char *)cpy + i);
		i++;
	}
	return (dubl);
}
