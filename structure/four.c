//copying structure
#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[10];
        float price;
        int pages;
    };
    struct book b1 = {"basic", 130.00, 550};
    struct book b2, b3;

    strcpy(b2.name, b1.name);
    b2.price = b1.price;
    b2.pages = b1.pages;

    b3 = b2;
    printf("Detail of book\n");
    printf("B1 book name is %s , b1 book price is %f, b1 book pages is %d", b1.name, b1.price, b1.pages);
    printf("B2 book name is %s , b2 book price is %f, b2 book pages is %d", b2.name, b2.price, b2.pages);
    printf("B3 book name is %s , b3 book price is %f, b3 book pages is %d", b3.name, b3.price, b3.pages);
    return 0;
}