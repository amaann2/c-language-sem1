#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, ans = 3, num;

    for (i = 0; i <= 5; i++)
    {
        printf("Guess a number between 1 - 10:  ");
        scanf("%d", &num);
        if (num == ans)
        {
            printf("congrats");
            break;
        }
        else
        {
            printf("oop try again\n");
        }
    }
    if (num = !ans && i == 6)
    {
        printf("you lost the challenge");
    }

    return 0;
}
