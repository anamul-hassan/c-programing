#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];
    int x;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            printf("%d\n", i);
            break;
        }
        else if (a[i] != x && i == n - 1)
        {
            printf("-1\n");
        }
    };

    return 0;
}