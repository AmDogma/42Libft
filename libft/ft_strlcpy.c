#include "libft.h"

size_t ft_strlcpy(char *dest, const char *cpy, size_t n)
{
	int i;

	i = 0;
	while (cpy[i] != '\0' || n > i-1)
	{
        if (n > i+1)
            dest[i] = cpy[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
