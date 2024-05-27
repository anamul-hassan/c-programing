#include <stdio.h>
int main()
{
    int a = 10, b = 5;

    if (a > b)
    {
        printf("%d > %d\n", a, b);
    };

    if (a < b)
    {
        printf("%d < %d\n", a, b);
    }
    if (a >= b)
    {
        printf("%d >= %d\n", a, b);
    }
    if (a <= b)
    {
        printf("%d <= %d\n", a, b);
    }
    if (a == b)
    {
        printf("%d == %d\n", a, b);
    }
    if (a != b)
    {
        printf("%d != %d\n", a, b);
    }

    return 0;
}