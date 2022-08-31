#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n , lastdigit ;
    cin>>n;
    int  originaln=n , sum=0;
    while (n>0)
    {
        lastdigit = n%10 ;
        sum+= pow(lastdigit , 3);
        n=n/10;

    }
    cout<< "lastdigit is "<<lastdigit;
    cout<<"sum is"<<sum;

    if (sum == originaln)
    {
        cout<<"this is armstrong";
    }

    else
    {
        cout<<"thsi is not a armstrong";
    }
    
    
    
    return 0;
}
