//  unit conversion
// 1)  km to miles
// 2)  inches to foot
// 3)  cms to inches
// 4)  pound to kg
// 5)  inches to meter

#include <stdio.h>
void km_to_miles()
{
    float km,miles;
    printf("---------km to miles--------");
    printf("\nenter the length: ");
    scanf("%f", &km);
    miles = km / 1.609;
    printf("%f km = %f miles\n", km, miles);
    printf("------end------\n");
}
void inches_to_foot()
{
    float inches,foot;
    printf("---------inches to foot--------");
    printf("\nenter the inches: ");
    scanf("%f", &inches);
    foot = inches / 12;
    printf("%f inches = %f foot\n", inches, foot);
    printf("------end------\n");
}
void cm_to_inches()
{
    float cm,inches;
    printf("---------cm to inches--------");
    printf("\nenter the cm: ");
    scanf("%f", &cm);
    inches = cm / 2.54;
    printf("%f cm = %f inches\n", cm, inches);
    printf("------end------\n");
}
void pound_to_kg()
{
    float pound,kg;
    printf("---------pound to kg--------");
    printf("\nenter the pound: ");
    scanf("%f", &pound);
    kg = pound / 2.205;
    printf("%f pound = %f kg\n", pound, kg);
    printf("------end------\n");
}
void inches_to_meter()
{
    float inches,meter;
    printf("---------inches to meter--------");
    printf("\nenter the inches: ");
    scanf("%f", &inches);
    meter = inches / 39.37;
    printf("%f inches = %f meter\n", inches, meter);
    printf("------end------\n");
}
int main()
{
    int user;
    printf("press 1 for km to miles \npress 2 for inches to foot \npress 3 for cms to inches \npress 4 for pound to kg \npress 5 for inches to meter\n");
    scanf("%d", &user);

    if (user == 1)
    {
        km_to_miles();
    }
    else if (user == 2)
    {
        inches_to_foot();
    }
    else if (user == 3)
    {
        cm_to_inches();
    }
    else if (user == 4)
    {
        pound_to_kg();
    }
    else if (user == 5)
    {
        inches_to_meter();
    }
    else
    {
        printf("default value \n Enter the value between 1 to 5");
    }
    return 0;
}
