#include "libft.h"

char	*ft_strchr(const char *str, int n)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == n)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
