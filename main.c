#include <stdio.h>
size_t ft_strlen(char *s);
char *ft_strcpy(char *dst, const char *src);
int ft_strcmp(char *s1, char *s2);
ssize_t ft_write(int , char *, size_t);
char *ft_strdup(char *s1);
#include <errno.h>
int main()
{
	/*char s1[10];*/
	/*char *s2 = "!@#$%^&*(";*/
	/*ft_strcpy(s1, s2);*/
	/*printf("%s\n", s1);*/
	/*printf("%d\n", ft_strcmp("123", "12A"));*/
	/*ft_write(1, 0, 3);*/
	/*printf("%d", errno);*/
	char *s2;
	char *s1 = "";
	s2 = ft_strdup(s1);
	printf("%s\n", s2);
	printf("%p != %p", s1, s2);
}
