#include<iostream>
#include<math.h>
using namespace std;

int fact(int n){
    int factorial=1;
    for (int i = 2; i <=n; i++)
    {
        factorial=factorial*i ;
    }
    return factorial;
    
}
int main()
{
    int n,i,j;
    for ( i = 0; i <=n; i++)
    {
        for ( j = 0; j <=i; j++)
        {
            cout<<fact(i)-(fact(j)*fact(i-j));
        }
        cout<<endl;
    }
    

}