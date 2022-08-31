
#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    char dept[20];
    int yoj;
} s1[250] = {1, "Amaan", "BCA", 2020,
             2, "Huzair", "Diploma fail", 2016,
             3, "Zeeshan", "Anesthesia", 2020,
             4, "shahnawaz", "BMM", 2019,
             5,"Ayushman","BCA",2020};

void yyear(int year)
{
    int i;
    for (i = 0; i <= 250; i++)
    {
        if (s1[i].yoj == year)
        {
            printf("Name = %s\n", s1[i].name);
            printf("Roll No = %d\n", s1[i].roll);
            printf("Dept = %s\n", s1[i].dept);
            printf("\n");
        }
    
    }
}
void rroll(int roll)
{
    int i;
    for (i = 0; i <= 250; i++)
    {
        if (s1[i].roll == roll)
        {
            printf("Name = %s\n", s1[i].name);
            printf("Dept = %s\n", s1[i].dept);
            printf("Year of joining = %d\n", s1[i].yoj);
            printf("\n");
        }
       
    }
}
int main()
{

    int year, rol;
    printf("Enter the Year of joining\n");
    scanf("%d", &year);
    yyear(year);

    printf("Enter the roll no of students\n");
    scanf("%d", &rol);
    rroll(rol);

    return 0;
}