#include <string.h>
#include <stdio.h>

// 1) нужна ли проверка на сущ dest 2) Нужно ли его создавать, если нет 3) Что если копируемая строка cpy меньше необходимых симоволов size_t 

void *ft_memove(void *dest, const void *cpy, size_t n)
{
	int i;
	unsigned char *dubl, buff[n+1];

	i = 0;
	buff[n] = '\0';
	dubl = (unsigned char *)dest;
	while (n > i)
	{
		buff[i] = *((unsigned char *)cpy+i);
		i++;
	}
	i = 0;
	while (n > i)
	{
		dubl[i] = buff[i];
		//printf("%i) %c \n", i, (unsigned char)dubl[i]);
		i++;
	}
	return (dubl);
}
