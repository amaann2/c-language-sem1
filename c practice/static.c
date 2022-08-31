#include <stdio.h>
int func1() 
{
    static int age = 19;
    printf("The age is %d",age);
    age++;
    return age;
}
int main()
{
    // printf("The value of func1 is %d",func1());  
    func1();
    func1();
    func1();
    func1();
    return 0;
}