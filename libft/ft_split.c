#include "libft.h"

static int ft_chsize(const char *str, char ch)
{
	int i;

	i = 0;
	while (str[i] != ch && str[i] != '\0')
		i++;
	return (i);
}

static int ft_msize(const char *s, char c)
{
	int add, i;

	i = 0;
	add = 0;
	while (s[add] != '\0')
	{
		if ((s[add] == c && s[add+1] != c) || (s[add] != c && add == 0))
			i++;
		add++;
	}
	return (i);
}

char **ft_split(char const *s, char c)
{
	int i, add;
	char **temp;

	i = add = 0;
	temp = (char **)malloc(sizeof(char *)*(ft_msize(s, c)+1));
	while (s[i] != '\0' && temp)
	{
		if (s[i-1] == c || i == 0)
		{
			if (ft_chsize(s + i, c))
				temp[add++] = ft_substr(s, i, ft_chsize(s + i, c));
			temp[add] = 0;
		}
		i++;
	}
	return (temp);
}
