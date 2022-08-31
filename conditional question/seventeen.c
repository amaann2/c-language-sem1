#include <stdio.h>
int main(int argc, char const *argv[])
{
    char letter , vowel ;
    printf("enter the letter : ");
    scanf("%c", &letter);
    if (letter == 'a' ||letter == 'e' ||letter == 'i' ||letter == 'o' ||letter == 'u' || letter == 'A' ||letter == 'E' ||letter == 'I' ||letter == 'O' ||letter == 'U')
    {
       printf("vowels");
    }
    else if((letter>='a' && letter<='z') || (letter>='A' && letter<='Z'))
    {
        printf("consonants");
    }
    
    else
    {
        printf("this is not a letter");
    }
    
    
 
    return 0;
}