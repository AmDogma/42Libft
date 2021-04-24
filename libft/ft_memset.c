#include "libft.h"

void	*ft_memset(void *dest, int simb, size_t n)
{
	size_t			i;
	unsigned char	*dubl;

	i = 0;
	dubl = (unsigned char *)dest;
	while (n > i)
	{
		dubl[i] = (unsigned char)simb;
		i++;
	}
	return (dubl);
}
