#include <stdio.h>
long addnumber(long*,long*);
int main()
{
    long a,b,sum;
    printf("enter first number:");
    scanf("%ld",&a);
    printf("enter second number:");
    scanf("%ld",&b);
    sum=addnumber(&a,&b);
    printf("addition is %ld and %ld is %ld",a,b,sum);
    return 0;
}
long addnumber(long *n1,long*n2){
    long sum;
    sum=*n1+*n2;
    return sum;
}