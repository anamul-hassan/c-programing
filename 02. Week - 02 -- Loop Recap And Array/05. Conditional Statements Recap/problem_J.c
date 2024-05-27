#include <stdio.h>
int main()
{

    int A, B;

    scanf("%d %d", &A, &B);

    if (A <= 1000000 && B <= 1000000)
    {
        if (A % B == 0 || B % A == 0)
        {
            printf("Multiples\n");
        }
        else
        {
            printf("No Multiples\n");
        }
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}