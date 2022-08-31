#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, n, sum = 0;
    cin>> n;
   
   for ( i = 0; i <=n; i++)
   {
       if(i%2==0){
         cout<<i;
       }
       cout<<endl;
       sum =sum +i;
       cout <<  sum ;
   }
   
    return 0;
}
