#include<stdio.h>
int main(int argc, char const *argv[])
{
     int i ,table ;
    printf("enter a number you want multiplication table for : ");
    scanf("%d", &table);

    for ( i = 1; i <=10; i++)
    {
        printf("%d * %d = %d\n" , table , i , table*i);
    }
    
    return 0;
}
