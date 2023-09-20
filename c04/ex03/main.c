#include<stdio.h>
#include<stdlib.h>

int ft_atoi(char *str);
int main(int argc, char **argv)
{
    int mock;
    int actual;
    if(argc == 2)
    {
        mock = ft_atoi(argv[1]);
        actual = atoi(argv[1]);
        printf("%d\n", mock);
        printf("%d\n", actual);
    }
    return 0;
}
    