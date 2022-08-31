#include <stdio.h>
int main()
{
    int a,b,add;
    int *p,*q;
    printf("Enter two number for asddition: ");
    scanf("%d",&a);
    printf("Enter two number for asddition: ");
    scanf("%d",&b);
    *p=&a;
    *q=&b;
    add=*p+*q;
    printf("The addition of %d and %d is %d",a,b,add);
    return 0;
}