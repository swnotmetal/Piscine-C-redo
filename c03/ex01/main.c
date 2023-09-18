#include<stdio.h>
#include<string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);
int main(void)
{
    char    str1[] = "-35";
    char    str2[] = " ";

    printf("own:%d\n", ft_strncmp(str1, str2, 15));
    printf("actual:%d\n", strncmp(str1, str2, 15));
}