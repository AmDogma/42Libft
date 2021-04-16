#include <string.h>
#include <stdio.h>

// 1) нужна ли проверка на сущ dest 2) Нужно ли его создавать, если нет 

void *ft_memccpy(void *dest, const void *cpy, int ch, size_t n)
{
	int i;
	unsigned char *dubl;

	i = 0;
	dubl = (unsigned char *)dest;
	while (n > i)
	{
		if (*((unsigned char *)cpy+i) == ch)
			break;
		dubl[i] = *((unsigned char *)cpy+i);
		//printf("%i) %c \n", i, *(unsigned char *)(cpy+i));
		i++;
	}
	return (dubl);
}
