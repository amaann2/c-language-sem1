#include<stdio.h>
int main(int argc, char const *argv[])
{
    int height;
    printf("Enter you height in cm : ");
    scanf("%d", &height);

    if(height<=150){
        printf("your height is dwarf");
    }
    else if(height>150 && height<=165)
    {
        printf("you height is average");
    }
    else if(height>=165 && height<=195){
        printf("your height is tall");
    }
    else
    {
        printf("you are abnormal");
    }
    
    

    return 0;
}
