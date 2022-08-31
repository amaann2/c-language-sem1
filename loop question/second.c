#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i , num , sum=0 ;
    printf("enter a number : ");
    scanf("%d", &num);

    for ( i = 0; i <= num; i++)
    {
        printf("%d",i);
        sum = sum + i ;
    }
        printf("the sum is  :%d",sum);

    
    return 0;
}
