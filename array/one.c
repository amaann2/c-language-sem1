#include <stdio.h>
int main(int argc, char const *argv[])
{
    int array[5];
    printf("Enter the element\n");
    int i;
    for (int i = 0; i < 5; i++)
    {   
        printf("element - %d: ",i);
        scanf("%d", &array[i]);
    }

    printf("\nThe element is :");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
