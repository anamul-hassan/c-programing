#include <stdio.h>
int main()
{

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int max = a, min = a;

    if (b > max)
    {
        max = b;
    }
    else if (b < min)
    {
        min = b;
    }

    if (c > max)
    {
        max = c;
    }
    else if (c < min)
    {
        min = c;
    }

    printf("%d %d", min, max);
    return 0;
}