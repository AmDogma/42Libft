#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	char	*temp;
	int		num;
	int		i;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	dest = ft_strdup(s1);
	temp = dest;
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
	if (dest)
	{
		dest = ft_strdup(dest);
		free(temp);
	}
	return (dest);
}
