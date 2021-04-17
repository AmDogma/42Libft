#include "libft.h"

char *ft_substr(char const *str, unsigned int start, size_t len)
{
	void *dest;
	int num;

	num = (int)ft_strlen(str+start)+1;
	if (num < len)
		len = num;
	dest = (void *)malloc(num);
	if (dest)
		ft_strlcpy(dest, str+start, len+1);
	return (dest);
}

// Нужно ли добавлять +1 к сайз_т для завершающего 0???
