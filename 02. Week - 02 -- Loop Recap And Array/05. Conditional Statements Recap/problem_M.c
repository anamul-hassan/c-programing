#include <stdio.h>
int main()
{
    char X;

    scanf("%c", &X);

    if (X >= 65 && X <= 90)
    {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }
    else if (X >= 97 && X <= 122)
    {
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }
    else if (X >= 48 && X <= 57)
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("Invalid Input\n");
    }

    return 0;
}