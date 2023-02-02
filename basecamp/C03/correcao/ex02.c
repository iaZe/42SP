#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char str[] = "mal";
	char buf[11] = "to bem ";
	char *dest;

	dest = ft_strcat(buf, str);

	printf("buf: '%s'\n", dest);
}