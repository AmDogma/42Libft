#include "libft.h"

char *ft_strdup(const char *str)
{
	char *dest;
	int num;

	num = (int)ft_strlen(str)+1;
	dest = (char *)malloc(sizeof(char)*num);
	if (dest)
		ft_strlcpy(dest, str, num);
	return (dest);
}
