#include<stdio.h>
#include<string.h>
struct agency
{
    char name[20];
    char license[20];
    char route[50];
    int km;
};

int main()
{
    int n;
    printf("\nEnter the number of driver:");
    scanf("%d",&n);
    for ( int i = 0; i < n; i++)
    {
    struct agency a1,a2,a3;
    printf("\n");
    printf("Enter the name of %d driver:",i);
    scanf("%s",&a1.name);
    printf("Enter the license number of %d driver:",i);
    scanf("%s",&a1.license);
    printf("Enter the route of %d driver:",i);
    scanf("%s",&a1.route);
    printf("Enter the km of %d driver:",i);
    scanf("%d",&a1.km);
    printf("\n");

    printf("The %d driver name is %s\n\n",i,a1.name);
    printf("The %d driving license number is %s\n\n",i,a1.license);
    printf("The %d route is %s\n\n",i,a1.route);
    printf("The %d km driven is %d\n\n",i,a1.km);
    }
    return 0;
    
}
