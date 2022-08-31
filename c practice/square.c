#include<stdio.h>
int square(int num){
    return (num*num);
}
int main()
{
    int n,num;
    printf("number");
    scanf("%d",&num);

    n=square(num);
    printf("%d",n);
    return 0;
}
