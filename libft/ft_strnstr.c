#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	if (!str2[0])
		return ((char *)str1);
	while (str1[i1] != '\0' && n > i1)
	{
		i2 = 0;
		while (str1[i1] == str2[i2] && n > i1)
		{
			i2++;
			if (str2[i2] == '\0')
				return ((char *)str1 + i1 - i2 + 1);
			i1++;
		}
		i1++;
	}
	return (NULL);
}
