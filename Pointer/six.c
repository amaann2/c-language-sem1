#include <stdio.h>
void average(int, int, int, float *, float *);
int main()
{
    int phy, chem, bio;
    float av, pr;
    printf("ENter the marks of three subject:");
    scanf("%d%d%d", &phy, &chem, &bio);
    average(phy, chem, bio, &av, &pr);
    printf("The average is %f\n the percentage is %f", av, pr);

    return 0;
}
void average(int phy, int chem, int bio, float *av, float *pr)
{
    *av = (phy + bio + chem)/3;
    *pr = *av/3;
}