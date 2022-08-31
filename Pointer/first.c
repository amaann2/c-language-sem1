#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m=10 , n=1, o;
    int*z=&m;
    int*y=&n;

    printf("z stores the value of m is %i\n",*z);
    printf("z stores the adress of m is %d\n",z);
    printf("the adress of m is %p\n",&m);
    printf("the adress of z is %p\n",&z);
    printf("the adress of n is %p\n",&n);
    printf("the adress of o is %p\n",&o);
    printf("the value of n is %d",*y);
    printf("the adress of n is %p",&y);

    return 0;
}
