#include <stdio.h>
int main()
{

    int n, x, v;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &x, &v);

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == x)
        {
            printf("%d ", v);
        }
        else
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}