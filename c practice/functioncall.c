#include <stdio.h>
int add( int*x, int*y ){
   return *x+*y;
   return *x-*y
}
int sub( int*x, int*y ){
   return *x-*y;
}
int main()
{
    int a=4,b=3,d,s;
    printf("The value of A is %d\n and value of B is %d\n",a,b);
    d=add(&a,&b);
    s=sub(&a,&b);
    printf("The addition is %d\n",d);
    printf("The subtraction is is %d\n",s);
    return 0;
}