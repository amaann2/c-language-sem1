#include<stdio.h>
int main()
{
    int exam;

    printf("Enter the subject which you clear:\n " ,exam);
    printf ("You have clear maths then press 1\n", exam);
    printf ("You have clear science then press 2\n", exam);
    printf ("You have clear both subjects then press 3\n", exam);
    scanf ("%d",&exam);


    if(exam==1){
        printf("you have win 15 rs gift");
    }
    else if(exam==2){
        printf("you have win 15 rs gift");
    }
    else if(exam==3){
        printf("you have win 45 rs gift");
}
   

    return 0;
}
