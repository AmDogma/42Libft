#include "libft.h"

int	ft_memcmp(void *cmp1, const void *cmp2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	diff = 0;
	while (n > i && !diff)
	{
		diff = *((unsigned char *)cmp1 + i) - *((unsigned char *)cmp2 + i);
		i++;
	}
	return (diff);
}
