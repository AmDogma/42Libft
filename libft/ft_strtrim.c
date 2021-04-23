#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	int		num;
	int		i;

	i = 0;
	dest = ft_strdup(s1);
	num = (int)ft_strlen(s1) - 1;
	while (set[i] != '\0' && dest && num >= 0)
	{
		if (dest[num] == set[i])
		{
			dest[num--] = '\0';
			i = 0;
		}
		else if (*dest == set[i])
		{
			dest++;
			num--;
			i = 0;
		}
		else
			i++;
	}
	return (dest);
}
