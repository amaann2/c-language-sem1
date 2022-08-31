#include<stdio.h>
int natural(int n){
    if (n<50)
    {
        printf("%d\n",n);
        natural (n+1);
    }
    
}
int main(int argc, char const *argv[])
{   
    int n=1;
    // natural(n);
    printf("%d",natural(n));

    return 0;
}
