#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i ,j, rows ;
    printf("enter a rows number :  ");
    scanf("%d",&rows);

    for ( i = 1; i <= rows; i++)
    {
        for ( j = 1; j <= rows; j++)
        {
            if (j<=rows-i)
            {
               printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    
    return 0;
}
