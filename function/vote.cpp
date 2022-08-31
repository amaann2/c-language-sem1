#include<iostream>
using namespace std;

int agee(int n){
    int age;
    if (age>18)
    {
        cout<<"you are eligible";
    }
    else
    {
        cout<<"you are not eligible";
    }
    return age;
    
}

int main()
{
    int a;
    cin>>a;
    cout<<agee(a);
    return 0;
}
