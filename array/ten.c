#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[100], a2[100], a3[100];
    int i, n, j=0, k=0;

    printf("enter the size you want: ");
    scanf("%d", &n);

    printf("Input the element you want: ");
    for (i = 0; i < n; i++)
    {
        printf("element - %d is : ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            a2[j] = a[i];
            j++;
        }
        else
        {
            a3[k] = a[i];
            k++;
        }
    }
    printf("\nthe even number from array is: ");
    for (i = 0; i < j; i++)
    {
        printf("%d\t", a2[i]);
    }
    printf("\nthe odd number from array is: ");
    for (i = 0; i < k; i++)
    {
        printf("%d\t", a3[i]);
    }

    return 0;
}
