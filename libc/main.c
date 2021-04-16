#include <stdio.h>
#include <string.h>

void *ft_memset(void *dest, int simb, size_t n);
void ft_bzero(void *dest, size_t n);
void *ft_memcpy(void *dest, const void *cpy, size_t n);
void *ft_memccpy(void *dest, const void *cpy, int ch, size_t n);
void *ft_memove(void *dest, const void *cpy, size_t n);
void *ft_memchr(void *dest, int ch, size_t n);
int ft_memcmp(void *cmp1, const void *cmp2, size_t n);
size_t ft_strlen(const char *str);
size_t ft_strlcpy(char *dest, const char *cpy, size_t n);
size_t ft_strlcat(char *dest, const char *cpy, size_t n);
char *ft_strchr(const char *str, int n);
char *ft_strrchr(const char *str, int n);
char *ft_strnstr(const char *str1, const char *str2, size_t n);

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
	return 0;
}
