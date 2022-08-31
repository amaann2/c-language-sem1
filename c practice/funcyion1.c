#include<stdio.h>
    int printstar(int n){
        for (int i = 0; i < n; i++)
        {
            printf("%c",'*');
        }
        
    }
int main(int argc, char const *argv[])
{   
    
    printstar(9);
  
    return 0;
}
