
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("enter age : ");
    scanf("%d", &age);

    if(age>18){
        printf("you can vote");
    }
    else
    {
        printf("not eligible!! vote after : %d years" , 18-age);
    }
    
    return 0;
}
