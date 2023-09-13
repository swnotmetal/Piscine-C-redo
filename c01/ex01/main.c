#include <stdio.h>
void    ft_ultimate_ft(int *********nbr);
int main(void)
{
    int num;
    int *ptr1, **ptr2, ***ptr3, ****ptr4, *****ptr5, ******ptr6,*******ptr7, ********ptr8, *********ptr9;

    num = 0;
    ptr1 = &num;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    ptr5 = &ptr4;
    ptr6 = &ptr5;
    ptr7 = &ptr6;
    ptr8 = &ptr7;
    ptr9 = &ptr8;
    printf("Before calling the function:%d\n", num);
    ft_ultimate_ft(ptr9);
    printf("After calling the function:%d\n", num);

  

}
