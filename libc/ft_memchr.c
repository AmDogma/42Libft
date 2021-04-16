#include <string.h>
#include <stdio.h>

// 1) нужна ли проверка на сущ dest 2) Нужно ли его создавать, если нет 3) Что если копируемая строка cpy меньше необходимых симоволов size_t 

void *ft_memchr(void *dest, int ch, size_t n)
{
	int i;
	unsigned char *dubl;

	i = 0;
	dubl = (unsigned char *)dest;
	while (n > i)
	{
		if (dubl[i] == ch)
			break;
		//printf("%i) %c \n", i, *(unsigned char *)(cpy+i));
		i++;
	}
	if (n == i)
		return NULL;
	else
		return (dubl+i);
}
