#include "libft.h"

// 1) нужна ли проверка на сущ dest 2) Нужно ли его создавать, если нет 

int ft_memcmp(void *cmp1, const void *cmp2, size_t n)
{
	int i, diff;

	i = 0;
	diff = 0;
	while (n > i && !diff && (*((unsigned char *)cmp1+i) != '\0' ||  *((unsigned char *)cmp2+i) != '\0'))
	{
		diff = *((unsigned char *)cmp1+i) - *((unsigned char *)cmp2+i);
		//printf("%i) %c \n", i, *(unsigned char *)(cpy+i));
		i++;
	}
	return (diff);
}
