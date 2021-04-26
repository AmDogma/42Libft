#include "libft.h"
#include <stdio.h>


static char forstrmapi(unsigned int i, char c)
{
	if (c > 96 && c < 123 && i%2)
		return(c-32);
	else if (c > 64 && c < 91 && i%2)
		return(c+32);
	else
		return (c);
}

int main() {
	// insert code here...
	char c[8];
	c[7] = '\0';
	printf("%s\n", (unsigned char *)c);
	ft_bzero(c, 8);
	unsigned char mem[44] = "some text here you! see?", cpy[] = "bonjour"; //ome text here you! see?
	//ft_memcpy(cpy, mem, 2);
	//void *str = cpy;
	//str = ft_memset(c, '3', 3);
	//printf("%s\n", ft_memccpy(cpy, "zyxwvutsrqponmlkjihgfedcba", 'r', 20));
	//printf("MEMMOVE = %s\n", ft_memmove(mem+5, mem+3, 2));
	//printf("%s\n", (char *)ft_memchr(mem, 't', 11));
	printf("Begin test : %s|%s\nAfter test : ", mem, cpy);

	//printf("%d", ft_memcmp(mem, cpy, 15));
	//printf("%d\n", (int)ft_strlen((char *)mem));
    //printf("%lu \n", ft_strlcpy((char *)cpy, "", 15));
	//printf("\nMY %lu, %s\n", ft_strlcat((char *)mem, "2222222", 3), mem);
    //printf("ft_strchr ... %s\n", ft_strchr("tripouille", 't' + 256));
     //printf("ft_strRchr ... %s\n", ft_strrchr((char *)mem, 't'));
	//printf("ft_strNstr ... |%s|\n", ft_strnstr("aaabcabcd", "cd", 8));
    //printf("ft_strncmp... |%d|\n", ft_strncmp("test\200", "test\0", 6));
	//printf("\nATOI = %d\n", ft_atoi("   2147483647.999"));
	//printf("ATOI = %d", atoi("   2147483647.999"));
	//printf("Is alpha - %d\n", ft_isalpha('@'));
	//printf("Is digit - %d\n", ft_isdigit('9'));
	//printf("Is alnum - %d\n", ft_isalnum('A'));
	//printf("Is acsii - %d\n", ft_isascii(0));
	//printf("Is print - %d\n", ft_isprint(' '));
	//printf("To upper - %c\n", ft_toupper('z'));
	//printf("To lower - %c\n", ft_tolower('3'));
	//printf("%p\n", ft_calloc(4000000000, 56667));
	//printf("%s\n", ft_strdup((char *)mem));
	//printf("%s\n", ft_substr((char *)mem, 400, 20));
	//printf("%s", ft_strjoin((char *)mem, (char *)mem));
	//printf("%s", ft_strtrim("123456789f", "1234567456789"));
	/* далее split
	int		i = 0;
	char **temp = ft_split("в в  в  в", ' ');
	while (temp[i])
	{
		printf("SPLIT #%d %s\n", i, temp[i]);
		i++;
	}
	конец сплит */
	//printf("ITOA = %s\n", ft_itoa(-5859));
	//printf("STRMAPI %s\n", ft_strmapi("", &forstrmapi));
	//ft_putchar_fd('!', 1);
	//ft_putstr_fd("1231231231\n", 1);
	//ft_putendl_fd("1231231231", 1);
	//ft_putnbr_fd(12131231, 1);
	
	return 0;
}
