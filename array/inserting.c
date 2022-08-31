#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, pos, n, val;
    int a[100];

    printf("size of array:");
    scanf("%d", &n);

    printf("input element: ");

    for (i = 0; i < n - 1; i++)
    {
        printf("element-%d: ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the index on inserting array: ");
    scanf("%d", &pos);

    printf("Enter the value on inserting array: ");
    scanf("%d", &val);

    for (i = n - 1; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = val;

    printf("Array after inserting");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}