#include "libft.h"

static int	ft_chsize(const char *str, char ch)
{
	int	i;

	i = 0;
	while (str[i] != ch && str[i] != '\0')
		i++;
	return (i);
}

static int	ft_msize(const char *s, char c)
{
	int	add;
	int	i;

	i = 0;
	add = 0;
	while (s[add] != '\0')
	{
		if ((s[add] == c && s[add + 1] != c) || (s[add] != c && add == 0))
			i++;
		add++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		add;
	char	**temp;

	i = 0;
	add = 0;
	if (s == NULL)
		return (NULL);
	temp = (char **)malloc(sizeof(char *) * (ft_msize(s, c) + 1));
	while (s[i] != '\0' && temp)
	{
		if (i == 0 || (s[i - 1] == c && i > 0))
		{
			if (ft_chsize(s + i, c))
			{
				temp[add] = ft_substr(s, i, ft_chsize(s + i, c));
				if (temp[add++] == NULL)
				{
					while (add >= 0)
						free(temp[add--]);
					free (temp);
					return (NULL);
				}
			}
			temp[add] = NULL;
		}
		i++;
	}
	if (!*s)
		*temp = NULL;
	return (temp);
}
