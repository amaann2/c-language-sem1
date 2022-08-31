#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, d;
    printf("enter the tree side of triangle : ");
    scanf("%d %d %d ", &a, &b, &c);
    d = a + b + c;

    if (d == 180)
    {
        printf("this is perfect triangle");
    }
    else
    {
        printf("the traiangle is not valid");
    }
    return 0;
}
