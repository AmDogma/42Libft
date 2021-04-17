#include "libft.h"

int ft_strncmp(const char *cmp1, const char *cmp2, size_t n)
{
	int i, diff;

	i = 0;
	diff = 0;
	while (n > i && !diff && (cmp1[i] != '\0' || cmp2[i] != '\0'))
	{
		diff = *(cmp1+i) - *(cmp2+i);
		//printf("%i) %c \n", i, *(unsigned char *)(cpy+i));
		i++;
	}
	return (diff);
}
