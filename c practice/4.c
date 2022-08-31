#include<stdio.h>
int main(int argc, char const *argv[])
{
    char let1,let2,let3 ;
    printf("enter three letter : "); 
    scanf("%c %c %c " ,let1 , let2, let3 );
    
    printf("reverse of %c %c %c is %c %c %c" ,let1,let2,let3,let3,let2,let1);
    return 0;
}
