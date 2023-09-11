#include <unistd.h>
void    ft_is_negative(int n);
int main(void)
{
    int num;
    int zero;

    num = -42;
    zero = 0;
    ft_is_negative(num);
    ft_is_negative(zero);
    write(1,"\n", 1);
    return (0);
}