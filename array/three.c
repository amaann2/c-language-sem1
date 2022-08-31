#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n , i ,sum=0;
    int a[100];

    printf("Enter the size you want: ");
    scanf("%d",&n);

    printf("\nInput the element: ");
    for ( i = 0; i < n; i++)
    {
        printf("\n3element - %d is : ",i);
        scanf("%d",&a[i]);
    }
    printf("\n\nThe element you stored is: ");
    for ( i = 0; i < n; i++)
    {
        printf("%3d",a[i]);
    }
        for ( i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }
    printf("\n\nThe sum of element you stored is %d: ",sum);
    
    return 0;
}
