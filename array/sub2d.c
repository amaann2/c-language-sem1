#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[100][100], b[100][100], c[100][100], n, i, j;
    printf("Enter a size of an array: ");
    scanf("%d", &n);

    printf("Enter a element of first array: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element - [%d],[%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter a element of second array: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element - [%d],[%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nThe First matrix is :\n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
    }
    printf("\nThe second matrix is :\n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d\t", b[i][j]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
    printf("The subtraction of matrix is\n");
    for ( i = 0; i < n; i++)
    {   
        printf("\n");
       for ( j = 0; j < n; j++)
       {
           printf("%d\t",c[i][j]);
       }
       printf("\n\n");
    }
    
    return 0;
}
