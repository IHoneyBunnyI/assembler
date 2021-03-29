#include "includes/libasm.h"
int main()
{
	/*char s1[10];*/
	/*char *s2 = "!@#$%^&*(";*/
	/*ft_strcpy(s1, s2);*/
	/*printf("%s\n", s1);*/
	printf("%d\n", ft_strcmp("123", "12A"));
	/*ft_write(1, 0, 3);*/
	/*printf("%d", errno);*/
	char *s2;
	char *s1 = "";
	s2 = ft_strdup(s1);
	printf("%s\n", s2);
	printf("%p != %p", s1, s2);
}
