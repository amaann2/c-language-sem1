#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, rows, cols;
    printf("Enter a number of rows and cols: ");
    scanf("%d %d", &rows, &cols);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
