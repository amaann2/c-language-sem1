#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[100][100],i,j,r,c;
    printf("Enter a number of rows and column: ");
    scanf("%d %d ",&r,&c);
   
    printf("Input the element of array: ");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("elemenet  - [%d],[%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    for ( i = 0; i <r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n\n");
    }
    
    return 0;
}
