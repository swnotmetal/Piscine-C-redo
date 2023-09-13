/*#include <unistd.h>
void    ft_ft(int *nbr);
int main(void)
{
    int n;

    n = 0;
    write(1, n ,1);
    ft_ft(&n);
    write(1, n, 1);
   
}
*/
#include <stdio.h>

void ft_ft(int *nbr);

int main(void)
{
    int number = 0; // Initialize an integer variable
    printf("Before calling ft_ft: %d\n", number);
    
    ft_ft(&number); // Call the function and pass the address of the integer
    
    printf("After calling ft_ft: %d\n", number); // Print the updated value
    
    return (0);
}
