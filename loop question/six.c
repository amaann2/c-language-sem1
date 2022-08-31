#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i , n , sum =0 ;
    printf("enter a number: ");
    scanf("%d",&n);

    for (i = 1; i<=n; i++)
    {   
        printf("%d ",i*2-1);
        sum=sum + i*2-1;
    }
     printf("\nthe sum of odd is: %d ", sum);
    return 0;
}
