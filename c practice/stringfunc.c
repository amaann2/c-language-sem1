#include <stdio.h>
#include <string.h>
int main()
{
    char st1[100];
    char st2[100];
    char st3[100];
   
    printf("Enter a name of first fiends:\n");
    gets(st1);
    printf("Enter a name of second fiends:\n");
    gets(st2);
    printf("\n%s is a friend of %s",st1,st2);

    printf("%s",strcat(st1,st2));
    puts(strrev(st1));
    strcpy(st3,strcat(st1,st2));
    puts(st3);
    return 0;

}