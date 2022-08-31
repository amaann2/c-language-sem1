#include<stdio.h>
int main()
{
    int num1 , num2 ;
    printf("Enter the two number : ");
    scanf("%d %d" , &num1 , &num2 );

    if (num1==num2)
    {
        printf("both number are equal");
    }
    else
    {
        printf("number are not equal");
    }
    
    
    return 0;
}
