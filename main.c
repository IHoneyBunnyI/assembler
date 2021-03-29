#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "libasm.h"

# define PATH "srcs/ft_strlen.s"
# define LINE "1234_?/0000line"
int main()
{
	char *line = LINE;
	printf("\033[1;36m============== ft_strlen ===============\033[0m\n");
	if (ft_strlen(line) == strlen(line)) 
		printf("\033[32mOK!\033[0m ");
	else
		printf("\033[1;31mERROR!\033[0m ");
	if (ft_strlen("1") == strlen("1")) 
		printf("\033[32mOK!\033[0m ");
	else
		printf("\033[1;31mERROR!\033[0m ");
	if (ft_strlen("kek") == strlen("lol")) 
		printf("\033[32mOK!\033[0m ");
	else
		printf("\033[1;31mERROR!\033[0m ");
	if (ft_strlen("") == strlen("")) 
		printf("\033[32mOK!\033[0m\n");
	else
		printf("\033[1;31mERROR!\033[0m\n");
	printf("\033[1;36m============== ft_strcmp ===============\033[0m\n");
	if (ft_strcmp(line, line) == strcmp(line, line)) 
		printf("\033[32mOK!\033[0m ");
	else
		printf("\033[1;31mERROR!\033[0m ");
	if (ft_strcmp("", "") == strcmp("", "")) 
		printf("\033[32mOK!\033[0m ");
	else
		printf("\033[1;31mERROR!\033[0m ");
	if (ft_strcmp("lol", "kek") == strcmp("lol", "kek")) 
		printf("\033[32mOK!\033[0m ");
	else
		printf("\033[1;31mERROR!\033[0m ");
	if (ft_strcmp("abcdefghijasdf1324''klji//", "abcdefghijasdf1324''klji//") == strcmp("abcdefghijasdf1324''klji//", "abcdefghijasdf1324''klji//"))
		printf("\033[32mOK!\033[0m ");
	else
		printf("\033[1;31mERROR!\033[0m\n");
	if (ft_strcmp("\x01", "\x01") == strcmp("\x01", "\x01")) 
		printf("\033[32mOK!\033[0m\n");
	else
		printf("\033[1;31mERROR!\033[0m ");
	printf("\033[1;36m============== ft_read ===============\033[0m\n");
	int fd;
	char *buf = malloc(sizeof(char) * 1000);
	char *buf2 = malloc(sizeof(char) * 1000);

	fd = open(PATH, O_RDONLY);
	read(fd, buf, 100);
	close(fd);
	fd = open(PATH, O_RDONLY);
	read(fd, buf2, 100);
	if (strcmp(buf, buf2) == 0)
		printf("\033[32mOK!\033[0m\n");
	else
		printf("\033[1;31mERROR!\033[0m\n");
	free(buf);
	free(buf2);
	printf("\033[1;36m============== ft_write ===============\033[0m\n");
	if (write(1, buf, 100) == ft_write(1, buf, 100))
		printf("\n\033[32mOK!\033[0m\n");
	else
		printf("\n\033[1;31mERROR!\033[0m\n");
	printf("\033[1;36m============== ft_strdup ===============\033[0m\n");
	char *copy_line;
	
	copy_line = ft_strdup(line);
	if (ft_strcmp(line, copy_line) == 0) 
		printf("\033[32mOK!\033[0m\n");
	else
		printf("\033[1;31mERROR!\033[0m\n");
	free(copy_line);
	printf("\033[1;36m============== ft_strdup ===============\033[0m\n");
	copy_line = malloc(sizeof(char) * ft_strlen(line));
	
	ft_strcpy(copy_line, line);
	if (ft_strcmp(line, copy_line) == 0) 
		printf("\033[32mOK!\033[0m\n");
	else
		printf("\033[1;31mERROR!\033[0m\n");
}
