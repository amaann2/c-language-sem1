#include<stdio.h>
int main()
{
    int num,i;
    printf("enter a number you want to multiply :  ");
    scanf("%d",&num);
    
    //  printf("%d * 1 = %d\n", num , num*1);
    //  printf("%d * 2 = %d\n", num , num*2);
    //  printf("%d * 3 = %d\n", num , num*3);
    //  printf("%d * 4 = %d\n", num , num*4);
    //  printf("%d * 5 = %d\n", num , num*5);
    //  printf("%d * 5 = %d\n", num , num*5);
    //  printf("%d * 6 = %d\n", num , num*6);
    //  printf("%d * 7 = %d\n", num , num*7);
    //  printf("%d * 8 = %d\n", num , num*8);
    //  printf("%d * 9= %d\n", num , num*9);
    //  printf("%d * 10 = %d\n", num , num*10);

    for ( i = 1 ; i < 1; i++)
    {
        printf("%d*%d=%d\n" , num,i,num*i);
    }
    return 0;
}

