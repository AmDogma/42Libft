#include "libft.h"

void	*ft_memmove(void *dest, const void *cpy, size_t n)
{
	int	count;

	count = 0;
	if (dest > cpy)
	{
		while (count < n)
		{
			*((unsigned char *)dest + n - 1) = *((unsigned char *)cpy + n - 1);
			n--;
		}
	}
	else
	{
		while (count < n)
		{
			*((unsigned char *)dest + count) = *((unsigned char *)cpy + count);
			count++;
		}
	}
	return (dest);
}
