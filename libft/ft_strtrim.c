#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		num;

	dest = ft_strdup(s1);
	if (!dest)
		return (dest);
	num = (int)ft_strlen(s1) - 1;
	while (*set != '\0')
	{
		if (dest[num] == *set)
		{
			dest[num--] = '\0';
			continue ;
		}
		if (*dest == *set)
		{
			dest += 1;
			num--;
			continue ;
		}
		set++;
	}
	return (dest);
}
