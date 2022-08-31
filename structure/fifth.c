//nested structure
#include <stdio.h>
int main()
{
    struct adress{
        char phone[12];
        char city[20];
        int pin;
    };
    struct emp{
        char name[20];
        struct adress a;
    };
    struct emp e={"Amaan","8291126896","Mumbai",1974};
    printf("Name = %s and Phone = %s\n",e.name,e.a.phone);
    printf("City = %s and Pin = %d\n",e.a.city,e.a.pin);
    return 0;
}