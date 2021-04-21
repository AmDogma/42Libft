#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		add;
	char	*temp;

	i = 0;
	add = (int)ft_strlen(s);
	temp = (char *)malloc(sizeof(char *) * (add + 1));
	while (s[i] != '\0' && temp)
	{
		temp[i] = (*f)(i, s[i]);
		i++;
	}
	return (temp);
}
