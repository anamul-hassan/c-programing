#include <stdio.h>
int main()
{
    int X, firstDigit;
    scanf("%d", &X);

    if (999 < X && X <= 9999)
    {
        firstDigit = X;
        while (firstDigit >= 10)
        {
            firstDigit = firstDigit / 10;
        };

        if (firstDigit % 2 == 0)
        {
            printf("EVEN\n");
        }
        else
        {
            printf("ODD\n");
        }
    }
    else
    {
        printf("Invalid Value");
    }

    return 0;
}