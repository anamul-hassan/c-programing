#include <stdio.h>
int main()
{

    int n, x;
    int max = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if (x > max)
        {
            max = x;
        }
    }

    printf("%d\n", max);

    return 0;
}