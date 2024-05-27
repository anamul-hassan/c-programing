#include <stdio.h>
int main()
{

    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if (A > B && A > C)
    {
        if (B > C)
        {
            printf("%d %d\n", C, A);
        }
        else
        {
            printf("%d %d\n", B, A);
        }
    }
    else if (B > A && B > C)
    {
        if (A > C)
        {
            printf("%d %d\n", C, B);
        }
        else
        {
            printf("%d %d\n", A, B);
        }
    }
    else if (C > A && C > B)
    {
        if (A > B)
        {
            printf("%d %d\n", B, C);
        }
        else
        {
            printf("%d %d\n", A, C);
        }
    }

    return 0;
}