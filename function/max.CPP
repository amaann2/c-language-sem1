#include <iostream>
using namespace std;

int max(int a , int b, int c )
{
    int f1;
    if (a>b)
    {
        f1=a;
    }
    else
    {
        f1=b;
    }
    if (f1>c)
    {
        return f1;
    }
    else{
        return c;
    }
}
int min(int a , int b, int c )
{
    int f1;
    if (a<b)
    {
        f1=a;
    }
    else
    {
        f1=b;
    }
    if (f1<c)
    {
        return f1;
    }
    else{
        return c;
    }
}
int main()
{
    int p ,q,r;
     
    cin>> p;
    cin>> q;
    cin>> r;

    cout << "maximum is: "<<max(p,q,r)<<endl;
    cout << "minimum is: "<<min(p,q,r)<<endl;
    
    return 0;
}
