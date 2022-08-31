#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,a[100];
    printf("Enter the size of element: ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++)
    {
        printf("enter the element - %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nThe element you stored is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%5d ", a[i]);
    }
    printf("\nThe element in reversed order is: ");
   for (int i = n-1; i >= 0; i--)
    {
        printf("%5d ", a[i]);
    }
     
    return 0;
}
