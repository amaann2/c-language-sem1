#include<iostream>
using namespace std;

int add(int n1 , int n2){
    int sum = n1 +n2;
    return sum;
}
int min(int n1, int n2){
    int difference=n1-n2;
    return difference;
}
int multiply(int n1, int n2){
    int mult=n1*n2;
    return mult;
}
int divide(int n1, int n2){
    int div=n1/n2;
    return div;
}
int main()
{
    int a , b ;
    cin>>a;
    cin>>b;
    cout<<"addition is:" <<add(a,b)<<endl;
    cout<<"subtraction is:" <<min(a,b)<<endl;
    cout<<"multiplication is:" <<multiply(a,b)<<endl;
    cout<<"division is:" <<divide(a,b)<<endl;
    return 0;
}
