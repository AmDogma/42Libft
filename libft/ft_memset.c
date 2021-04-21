#include "libft.h"

void	*ft_memset(void *dest, int simb, size_t n)
{
	int				i;
	unsigned char	*dubl;

	i = 0;
	dubl = (unsigned char *)dest;
	if (dest)
	{
		while (n > i)
		{
			dubl[i] = (unsigned char)simb;
			i++;
		}
	}
	return (dubl);
}
