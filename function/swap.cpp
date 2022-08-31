#include<iostream>
using namespace std;

int swap(int a ,int b){
    int a,b;
    a=a*b;
    return a;
    b = a/b;
    return b;
    a=a/b;

    return a;
}
int main(int argc, char const *argv[])
{
    int a,b;
    cin>>a;
    cin>>b;

    cout<< swap(a,b);
    return 0;
}
