#include<iostream>
using namespace std ;

int main(int argc, char const *argv[])
{
    int i,j,n;
    cout<<"enter a no of rows: ";
    cin>>n;

    for ( i = n; i >= 1; i--)
    {
    for ( j = 1; j <= i; j++)
    {
        cout<<j;
    }
    cout<<endl;
    }
    
    return 0;
}
