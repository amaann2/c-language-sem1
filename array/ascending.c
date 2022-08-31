#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, n, t;
    int a[100];

    printf("size of array:");
    scanf("%d", &n);

    printf("input element: ");

    for (i = 0; i < n; i++)
    {
        printf("element-%d: ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    printf("array in ascending order are: ");
    for (i = 0; i < n; i++)
    {

        printf("%d ", a[i]);
    }

    return 0;
}
