#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char str[] = "da 42 asdasfsf";
	char buf[20] = "pessoas ";
	int n = 8;
	char *c;

	c = ft_strncat(buf, str, n);
	printf("result: '%s'\n", c);
}