#include "libft.h"

//1)проверки, нужна ли dest например 2) передается через '1' судя по работе ориг функции 

void *ft_memset(void *dest, int simb, size_t n)
{
	int i;
	unsigned char *dubl;

	i = 0;
	dubl = (unsigned char *)dest;
	if(dest)
	{
		while (n > i)
		{
			dubl[i] = (unsigned char)simb;
			//printf("%i) %c \n", i, (unsigned char)dubl[i]);
			i++;
		}
	}
	return (dubl);
}
