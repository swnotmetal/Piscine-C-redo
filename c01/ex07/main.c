#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size);
void    print_arry(int *arry, int size)
{
    int i = 0;
    while (i < size)
    {
        printf("%d\n", arry[i]);
        i++;
    }
}

int main(void)
{
    
   int arry[] = {1,2,3,4,5};
   int size = sizeof(arry) / sizeof(arry[0]);
   // or int size = 5; give a specific size of the arry.

   printf("Original:\n");
   print_arry(arry, size);

   ft_rev_int_tab(arry, size);

    printf("Reversed:\n");
    print_arry(arry, size);
   

    return 0;


}