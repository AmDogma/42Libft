#include "libft.h"

size_t	ft_strlcat(char *dest, const char *cpy, size_t n)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (dest[count] != '\0' && n > count)
		count++;
	while (cpy[i] != '\0')
	{
		if (n > count + i + 1)
		{
			dest[i + count] = cpy[i];
			dest[i + count + 1] = '\0';
		}
		i++;
	}
	return (count + i);
}
