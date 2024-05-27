#include <stdio.h>
int main()
{

    int n, m;
    scanf("%d %d", &n, &m);

    int a[n];
    int count[m + 1];
    for (int i = 1; i <= m; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        if (num >= 1 && num <= m)
        {
            count[num]++;
        }
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
}