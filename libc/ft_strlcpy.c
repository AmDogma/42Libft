#include <string.h>

//1) нужна ли проверка на сущ dest 2) Нужно ли его создавать, если нет

char *ft_stlrcpy(char *dest, const char *cpy)
{
	int i;

	i = 0;
	while (cpy[i] != '\0')
	{
		dest[i] = cpy[i];
		i++;
	}
	return (dest);
}
