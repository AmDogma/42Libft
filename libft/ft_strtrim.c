#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char *dest;
	int num;

	dest = ft_strdup(s1);
	if (!dest)
		return (dest);
	num = (int)ft_strlen(s1)-1;
	/*
	 можно эту часть вынести в друг функцию
	 */
	while (*set != '\0')
	{
		if (dest[num] == *set)
		{
			dest[num--] = '\0';
			continue;
		}
		if (*dest == *set)
		{
			dest = dest+1; // dest++; или если сокращать ))) dest += 1 + num - num--;
			num--;
			continue;
		}
		set++;
	}
	return (dest);
}
