#include<stdio.h>
int main()
{
    int n , i ;
    int a[100];
    int max , min ;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Input the element of array:\n ");
    for ( i = 0; i <n; i++)
    {
        printf("element - %d is :",i);
        scanf("%d",&a[i]);
    }
    max = a[0];
    min =a[0];

    for ( i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        else if (a[i]<min)
        {
            min=a[i];
        }
    }
    printf("\nThe maximum value in an array is %d",max);
    printf("\nThe minimum value in an array is %d",min);
    
    return 0;
}
