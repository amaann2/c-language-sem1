#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j,nm=1,ctr=0;
    int a1[100],a2[100],a3[100];

    printf("enter the size of an array:\n");
    scanf("%d",&n);

    printf("Input the element of array: ");
    for ( i = 0; i < n; i++)
    {
        printf("Element-%d : ",i);
        scanf("%d",&a1[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        a2[i]=a1[i];
        a3[i]=0;
    }
    
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (a1[i]==a2[j])
            {
                a3[j]=nm;
                nm++;
            }
            
        }
        nm=1;
    }

    for ( i = 0; i <n; i++)
    {
        if (a3[i]==2)
        {
            ctr++;
        }
        
    }
    printf("dupicate no is %d",ctr);
    

    return 0;
}
