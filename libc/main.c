#include "libft.h"

int main(int argc, const char * argv[]) {
	// insert code here...
	char c[8];
	c[7] = '\0';
	printf("%s\n", (unsigned char *)c);
	ft_bzero(c, 8);
	unsigned char mem[20] = "some txt", cpy[15] = {};
	//ft_memcpy(cpy, mem, 2);
	//void *str = cpy;
	//str = ft_memset(c, '3', 3);
	//ft_memccpy(cpy, mem, ' ', 20);
	//ft_memove(mem+1, mem+3, 5);
	//printf("%s\n", (char *)ft_memchr(mem, 't', 11));
	printf("%s|%s\n", mem, cpy);
	//printf("%d", ft_memcmp(mem, cpy, 15));
	//printf("%d\n", (int)ft_strlen((char *)mem));
    //printf("%lu %s", ft_strlcpy((char *)cpy, "fejjfjffdfdfd", 8), cpy);
	//printf("%lu, %s\n",  ft_strlcat((char *)mem, "addsome", 12), mem);
    //printf("ft_strchr ... %s\n", ft_strchr((char *)mem, 't'));
     //printf("ft_strRchr ... %s\n", ft_strrchr((char *)mem, 't'));
    //printf("ft_strNstr ... |%s|\n", strnstr((char *)mem,"tx", 6));
    //printf("ft_strncmp... |%d|\n", ft_strncmp((char *)mem,"some txte", 17));
	//printf("ATOI = %d", ft_atoi("21474836483"));
	//printf("Is alpha - %d\n", ft_isalpha('@'));
	//printf("Is digit - %d\n", ft_isdigit('9'));
	//printf("Is alnum - %d\n", ft_isalnum('A'));
	//printf("Is acsii - %d\n", ft_isascii(0));
	return 0;
}
