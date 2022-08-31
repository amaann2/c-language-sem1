#include<iostream>
using namespace std ;
int main(int argc, char const *argv[])
{
    int i , n ,reversed=0 , lastdigit;
    cout<<"enter a number";
    cin>>n ;

    while (n>0)
    {
        lastdigit = n%10;
        reversed = reversed * 10 + lastdigit ;
        n=n/10;

    }
    cout<< "reversed no is:" <<reversed; 
    return 0;
}
