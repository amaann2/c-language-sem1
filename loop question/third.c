#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i , num ;
    printf("enter a number :  ");
    scanf("%d", &num);

    for (i = 1; i < num ; i++)          
    {
        printf("cube of number is %d :%d\n",i, i*i*i);
    }
    
    return 0;
}

