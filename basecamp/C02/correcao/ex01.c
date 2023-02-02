#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main() {
    char str1[] = "abcdefg";      // foo

    char str2[100];             // {'a', 'b', '\0', '/0', '/0'}

    char *res = ft_strncpy(str2, str1, 5);

    printf("str2: %s\n", str2);
    printf("res : %s\n", res);

    return 0;
}