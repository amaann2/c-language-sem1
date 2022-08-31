#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n , i ;
    int a1[100];
    int a2[100];

    printf("Enter the size you want: ");
    scanf("%d",&n);

    printf("\nInput the element: \n");
    for ( i = 0; i < n; i++)
    {
        printf("element - %d is : ",i);
        scanf("%d",&a1[i]);
    }
    for ( i = 0; i < n; i++)
    {
      a2[i]=a1[i];
    }
   
    printf("\n\nThe first element you stored is: ");
    for ( i = 0; i < n; i++)
    {
        printf("%3d",a1[i]);
    }
    printf("\n\nThe second element you stored is: ");
    for ( i = 0; i < n; i++)
    {
        printf("%3d",a2[i]);
    }
        return 0;
}