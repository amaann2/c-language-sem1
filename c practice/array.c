#include<stdio.h>
int main()
{
    // int marks[]={56,234,42,24};
    // // for ( int i = 0; i < 4; i++)
    // // {
    // //     printf("%d\t",marks[i]);
    // // }
    // printf("%d", marks[3]);

    int n;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int array[n];
     for (int i = 0; i <n; i++)
     {
         scanf("%d",&array[i]);
     }
     for (int i = 0; i <n; i++)
     {
     printf("%d",array[i]);
     }
     
    
    
    return 0;
}
