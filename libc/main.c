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
char *ft_stlrcpy(char *dest, const char *cpy);

int main(int argc, const char * argv[]) {
	// insert code here...
	char c[8];
	c[7] = '\0';
	printf("%s\n", (unsigned char *)c);
	ft_bzero(c, 8);
	unsigned char mem[15] = "Hello there", cpy[15] = {};
	//ft_memcpy(cpy, mem, 2);
	//void *str = cpy;
	//str = ft_memset(c, '3', 3);
	//ft_memccpy(cpy, mem, ' ', 20);
	//ft_memove(mem+1, mem+3, 5);
	//printf("%s\n", (char *)ft_memchr(mem, 't', 11));
	printf("%s|%s\n", mem, cpy);
	//printf("%d", ft_memcmp(mem, cpy, 15));
	//printf("%d\n", (int)ft_strlen((char *)mem));
	//printf("%s", ft_stlrcpy((char *)cpy, "fejjfjf"));
	return 0;
}
