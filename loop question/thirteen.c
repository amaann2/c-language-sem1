#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i , j ,row ;
    printf("enter a no of rows: ");
    scanf("%d",&row);

    for ( i = row; i >=1; i--)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
