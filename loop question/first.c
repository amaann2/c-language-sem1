#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i , sum = 0;
    for ( i = 0; i < 11; i++)
    {
        printf("%d",i);
        sum = sum+i;
    }
    printf("sum is :%d ",sum);
    
    return 0;
}
