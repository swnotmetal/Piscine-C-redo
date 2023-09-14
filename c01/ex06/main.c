#include <stdio.h>

int ft_strlen(char *str);
int main(void)
{
    char *c = "Baozichishi";
    int length = ft_strlen(c);

    printf("%d\n", length);

}