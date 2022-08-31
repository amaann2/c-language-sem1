#include <stdio.h>
int main(int argc, char const *argv[])
{
    int m, n;
    printf("enter a number: ");
    scanf("%d", &m);

    if (m != 0)
    {
        if (m > 0)
        {
            n = 1;
        }
        else
        {
            n = -1;
        }
    }
    else
    {
        n = 0;
    }

    printf("the value of n is %d ", n);

    return 0;
}
