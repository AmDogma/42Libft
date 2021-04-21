#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' ||c == '\v'
		||c == '\f' || c == '\r' || c == ' ');
}

int	ft_atoi(const char *str)
{
	int			minus;
	long long	res;

	minus = 1;
	res = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus = -minus;
		str++;
	}
	while (*str > 47 && *str < 58)
	{
		res = (res * 10) + (*str++) - 48;
	}
	return ((int)(res * minus));
}
