#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i , n ;
    printf("enter tht number:  ");
    scanf("%d",&n);

    for ( i = 0; i <= n; i++)
    {
        if (i %2==0)
        {
            continue;
        }
        printf("%d\n",i);
    }
    
    return 0;
}
