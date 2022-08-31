#include<iostream>
using namespace std ;

int main(int argc, char const *argv[])
{
    int a ,b;
    cin>>a ;
    cin >> b;
    
    if (a%2==0 && b%2==0)
    {
        cout<<a+b;
    }
    else if (a%2!=0 && b%2!=0)
    {
        cout<<a-b ;
    }
    else
    {
        cout<<"wrong";
    }
    
    
    return 0;
}
