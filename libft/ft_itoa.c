#include "libft.h"

static int	ft_nsize(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*dest;

	i = ft_nsize(n);
	dest = (char *)malloc(sizeof(char *) * (i + 1));
	if (dest)
	{
		if (n < 0)
			dest[0] = '-';
		dest[i--] = '\0';
		while (n != 0)
		{
			if (n > 0)
				dest[i] = n % 10 + 48;
			else
				dest[i] = -(n % 10) + 48;
			n /= 10;
			i--;
		}
	}
	return (dest);
}
