#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i ,j,num;
    printf("enter a number:  ");
    scanf("%d",&num);

    for ( i = 1; i <=num; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
        return 0;
}
