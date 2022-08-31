// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int age;
//     printf("enter your age : ");
//     scanf("%d",&age);

//     switch (age)
//     {
//     case 3:
//         printf("your age is 3");
//         break;
    
//     default:
//         break;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int qty , dis;
//     float rate,total;

//     printf("enter the quantity and rate of product: ");
//     scanf("%d %f" , &qty ,&rate);

//     if (qty>1000)
//         dis= 10 ;
//     else 
//         dis = 0 ;
     
//     total = (qty * rate) - (qty * rate * dis/100);
//     printf("total expense is : %f\n" , total);
    
//     return 0;
// }

#include<stdio.h>
int main(int argc, char const *argv[])
{
    float bs ,hra , da, salary ;
    printf("enter your basic salary : ");
    scanf("%f",&bs);

    if (bs<1500)
    {
        hra = bs*10/100 ;
        da = da *90/100 ;
    }
    else
    hra =500 ;
    da =bs*98/100 ;
    
    salary=bs+hra+da ;
    printf("your total salary is: %f/n",salary);
    return 0;
}

