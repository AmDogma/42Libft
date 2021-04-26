#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		num;

	if (s1 == NULL)
		return (NULL);
	num = (int)(ft_strlen(s1) + ft_strlen(s2)) + 1;
	dest = (char *)malloc(sizeof(char) * num);
	if (dest)
	{
		ft_strlcpy(dest, s1, num);
		ft_strlcat(dest, s2, num);
	}
	return (dest);
}
