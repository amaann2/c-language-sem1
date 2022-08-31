#include<iostream>
#include<math.h>
using namespace std ;

bool isprime(int n){
    int i ;
    for ( i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            return false ;
        }
        
    }
   return true ;
}
int main()
{
    int a , b ;
    cin  >> a;
    cin >> b;
    for (int i = a; i <= b; i++)
    {
        if (isprime(i))
        {
            cout <<i<< endl;
        }
        
    }
    
    return 0;
}
