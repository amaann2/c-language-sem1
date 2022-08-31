#include<iostream>
using namespace std;

int alphabets(char alp){
   if ( (alp >= 'a' && alp<='z') || (alp>='A'&& alp <= 'Z') )
   {
       cout<<"this is alphabets";
   }
   else
   {
       cout<<"this is not an alphabets";
   }
    return alp;
} 
int main()
{
    char c;
    cin>>c;
    cout<<alphabets(c);
    return 0;
}
