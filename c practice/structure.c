#include <stdio.h>
#include <string.h>

struct students
{
    int id;
    char college[29];
    int marks;
}amaan, huzair , shubham;

int main()
{
    // struct students amaan, huzair , shubham; 
    amaan.id = 1;
    amaan.marks = 90;
    strcpy(amaan.college,"somaiya");

    huzair.id = 2;
    huzair.marks = 90;
    strcpy(huzair.college,"bhavans");

    

    shubham.id = 3;
    shubham.marks = 90;
    strcpy(shubham.college,"sdfaa");
    
    
    printf("Amaan Id is %d\ngot %d marks\ncollege name is %s\n\n\n",amaan.id, amaan.marks,amaan.college);
    printf("Huzair Id is %d\ngot %d marks\ncollege name is %s\n\n\n",huzair.id, huzair.marks,huzair.college);
    printf("Shubham Id is %d\ngot %d marks\ncollege name is %s\n\n\n",shubham.id, shubham.marks,shubham.college);
    return 0;
} 