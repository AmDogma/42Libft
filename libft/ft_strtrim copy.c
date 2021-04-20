#include "libft.h"

static int ft_findch(const char *str, char ch)
{
	int i;

	i = 0;
	while (str[i] != ch && str[i] != '\0')
		i++;
	return (i);
}

char **ft_split(char const *s, char c)
{
	int i = 0, start = 0, add = 0;

	while (s[start] != '\0')
	{
		if (s[start++] == c)
			i++;
	}
	char **temp = (char **)malloc(sizeof(char *)*(i+1));
	start = 0;
	i= 0;
	while (s[i] != '\0' && temp)
	{
		if (s[i-1] == c || i == 0)
		{
			if (ft_findch(s + i, c))
				temp[add++] = ft_substr(s, i, ft_findch(s + i, c));
			temp[add] = 0;
		}
		i++;
	}

	return temp;
}
