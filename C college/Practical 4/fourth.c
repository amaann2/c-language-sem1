#include<stdio.h>
int main()
{   
    int table , i;
    printf("Enter a Number for Multiplication: ");
    scanf("%d",&table);

   for ( i = 1 ; i <=10; i++)
   {
       printf(" %d * %d = %d\n" , table , i , table*i );
   }
   
    return 0;
}