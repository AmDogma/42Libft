#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*dest;

	dest = (void *)malloc(num * size);
	if (dest)
		ft_bzero(dest, num * size);
	return (dest);
}
