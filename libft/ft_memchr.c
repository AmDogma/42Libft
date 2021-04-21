#include "libft.h"

void	*ft_memchr(void *dest, int ch, size_t n)
{
	int				i;
	unsigned char	*dubl;

	i = 0;
	dubl = (unsigned char *)dest;
	while (n > i)
	{
		if (dubl[i] == ch)
			break ;
		i++;
	}
	if (n == i)
		return (NULL);
	else
		return (dubl + i);
}
