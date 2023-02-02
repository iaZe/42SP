#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char a[] = "a";
	char b[] = "b";
	char c[] = "c";
	int i;

	i = ft_strcmp(a, a);
	printf("s: '%s' - '%s' = '%d'\n", a, a, i);

	i = ft_strcmp(a, c);
	printf("s: '%s' - '%s' = '%d'\n", a, c, i);

	i = ft_strcmp(a, b);
	printf("s: '%s' - '%s' = '%d'\n", a, b, i);

	i = ft_strcmp(b, a);
	printf("s: '%s' - '%s' = '%d'\n", b, a, i);
}