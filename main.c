#include <stdio.h>
size_t ft_strlen(char *s);
char *ft_strcpy(char *dst, const char *src);

int main()
{
	char s1[10];
	char *s2 = "!@#$%^&*(";
	ft_strcpy(s1, s2);
	printf("%s", s1);
}
