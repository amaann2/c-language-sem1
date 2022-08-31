#include<stdio.h>
int main()
{
    int arr[]={2,5,23,6,85,653,43};
    printf("The adress of first element is:%d\n",&arr[0]);
    printf("The adress of first element is:%d\n",arr);
    printf("The adress of second element is:%d\n",&arr[1]);
    printf("The adress of second element is:%d\n",arr+1);
    printf("The value of adress of second element is:%d\n",*(&arr[0]));
    printf("The value of adress of second element is:%d\n",*arr);
    printf("The value of adress of second element is:%d\n",*(&arr[1]));
    printf("The value of adress of second element is:%d\n",arr[1]);
    printf("The value of adress of second element is:%d\n",*(arr+1));
  
    return 0;
}
