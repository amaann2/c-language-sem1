#include <stdio.h>
int main(int argc, char const *argv[])
{
    int p, c, m, t, mp;

    printf("enter the mark in physics : \n");
    scanf("%d", &p);
    
    printf("enter the mark in chemsitry : \n");
    scanf("%d", &c);

    printf("enter the mark in maths : \n");
    scanf("%d", &m);

    printf("total marks in phy and chem is  :%d \n", p + c);
    printf("total marks is:%d \n", p + c + m);

    if (m >= 65)
    {
        if (p >= 55)
        {
            if (c >=  50)
            {
                if (p + c + m >= 190 || p + c >= 140)
                {
                    printf("you are eligible");
                }
                else
                {
                    printf("you are not eligible");
                }
            }
            else
            {
                printf("you are not eligible");
            }
        }
        else
        {
            printf("you are not eligible");
        }
    }

    return 0;
}
