#include<Stdio.h>
int main(int argc, char const *argv[])
{
    int num ;
    printf("enter a number: ");
    scanf("%d",&num);

    if(num<0){
        printf("number are negative");
    }
    else
    {
        printf("number are positive");
    }
    
    return 0;
}
