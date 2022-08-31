#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i , j , n , k =1;
    printf("enter a number of rows: ");
    scanf("%d",&n);

    for ( i = 0; i <n; i++)
    {
        for ( j = 0; j <=i ; j++)
        {
            printf("%d", k++);
        }
        printf("\n");
    }
    
    return 0;
}
