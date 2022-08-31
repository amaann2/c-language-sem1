#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("number are even ");
    }
    else
    {
        printf("number are odd");
    }
    
    
    return 0;
}
