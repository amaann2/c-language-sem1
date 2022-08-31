//Array of structure
#include <stdio.h>
struct book
{
    char name[10];
    float price;
    int pages;
};
int main()
{
    struct book b[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter the name of %d book\n", i + 1);
        scanf("%s", &b[i].name);
        printf("Enter the price of %d book\n", i + 1);
        scanf("%f", &b[i].price);
        printf("Enter the total no of %d book\n", i + 1);
        scanf("%d", &b[i].pages);
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Book %d details\n", i + 1);
        printf("The name of book is %s\n", b[i].name);
        printf("Enter the price of book is %f\n", b[i].price);
        printf("Enter the total no of book is %d\n", b[i].pages);
    }

    return 0;
}