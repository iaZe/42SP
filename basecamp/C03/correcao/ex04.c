#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[] = "Esse é um pequeno teste";
	char find[] = "um";
	char *c;

	printf("find '%s' in '%s'\n", find, str);
	c = ft_strstr(str, find);
	printf("result: %s\n", c);
}