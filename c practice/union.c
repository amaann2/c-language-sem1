#include <stdio.h>
#include <string.h>
union student
{
    int id;
    int marks;
    char fav_char;
    char name[20];
};
int main()
{
    union student s1;
    s1.marks=40;
    s1.id = 1;
    strcpy(s1.name,"Amaan");
    s1.fav_char='u';

    printf("The id is %d\n",s1.id);
    printf("The marks is %d\n",s1.marks);
    printf("The fav char is %c\n",s1.fav_char);
    printf("The name is %s\n",s1.name);
    return 0;
}