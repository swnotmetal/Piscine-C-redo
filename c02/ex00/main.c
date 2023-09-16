#include<stdio.h>
#include<string.h>
char    *ft_strcpy(char *dest, char *src);
int main(void)
{
    char    src_act[] = "goodboykielo";
    char    dest_act[100];

  

    printf("Mock:%s\n", ft_strcpy(dest_act, src_act));
    printf("Actual:%s\n",strcpy(dest_act, src_act));
    return 0;
}