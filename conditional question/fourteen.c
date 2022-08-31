#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c ;
    printf("enter the tree side of triangle : ");
    scanf("%d %d %d " , &a ,&b ,&c);

    if (a==b && a==c && b==c)
    {
        printf("triangle is equilateral");
    }
    else if(a==b || b==c ||a==c)
    {
       printf("the triangle is isoceles");
    }
    else
    {
        printf("the triangle is scelene");
    }
    
    
    
    return 0;
}
