#include<iostream>
#include<math.h>
using namespace std ;

int even(int n){
    if (n%2==0)
    {
        cout<<"number is even";
    }
    else 
    {
        cout<<"number is odd";
    }
    return n;
}
int main(int argc, char const *argv[])
{
    int n,ans;
    cin>>n;
    ans=even(n);
    cout<<ans;
    return 0;
}
