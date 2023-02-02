#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
    char str[]="oi, tuDo bEm? 42pa@la#vras qu$ar*enta-e-duas; cinquenta+e+um";
    ft_strcapitalize(str);
    printf ("%s\n", str);
}