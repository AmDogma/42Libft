#include "libft.h"

char	*ft_strrchr(const char *str, int n)
{
	int		i;
	char	*temp;

	i = 0;
	temp = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == (char)n)
			temp = (char *)str + i;
		i++;
	}
	if (str[i] == (char)n)
		return ((char *)str + i);
	return (temp);
}
