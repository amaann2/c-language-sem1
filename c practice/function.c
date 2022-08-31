//without arguement and without return type//
// #include<stdio.h>
// void great();
// int main()
// {
//     great();
//     return 0;
// }
// void great(){
//     int i , j ;
//     printf("enter a number");
//     scanf("%d %d ", &i,&j);
//     if (i>j)
//     {
//         printf("i is greater" );
//     }
//     else
//     {
//         printf("j is greater");
//     }
 
// }

//without arguement and with return type//
#include<stdio.h>

int add(){
    int i,j,greater;
         printf("enter a number");
     scanf("%d %d ", &i,&j);
     if (i>j)
     {
         greater=i;
     }
     else
     {
        greater=j;
     }
  return greater;
}
int main(int argc, char const *argv[])
{
    int result;
    result = add();
    printf("the greater num is %d", result);
    return 0;
}
