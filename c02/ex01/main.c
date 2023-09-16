#include<stdio.h>
#include<string.h>
char    *ft_strncpy(char *dest, char *src, unsigned int n);
int main(void)
{
    char    src_act[] = "goodboykielo";
    char    dest_act[100];

  

    printf("Mock:%s\n", ft_strncpy(dest_act, src_act, 10));
    printf("Actual:%s\n",strncpy(dest_act, src_act, 5));
    return 0;
}