#include <string.h>

size_t ft_strlcat(char *dest, const char *cpy, size_t n)
{
	int i, destcount;

	i = 0;
    destcount = 0;
    while (dest[destcount] != '\0')
        destcount++;
	while (cpy[i] != '\0' && n > i+1)
    {
        dest[i+destcount] = cpy[i];
        i++;
    }
    dest[i+destcount] = '\0';
	return (i);
}
