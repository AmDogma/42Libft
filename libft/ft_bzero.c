#include "libft.h"

void ft_bzero(void *dest, size_t n)
{
	int i;
	unsigned char *dubl;

	i = 0;
	dubl = (unsigned char *)dest;
	if(dest)
	{
		while (n > i)
		{
			dubl[i] = 0;
			i++;
		}
	}
	return;
}
