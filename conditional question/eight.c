#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter three number : ");
    scanf("%d %d %d ", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is largest");
        }
        else
        {
            printf("c is largest");
        }
    }
    else if (b > c)
    {
        printf("b is the largest");
    }
    else
    {
        printf("c is the largest");
    }

    return 0;
}
