#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int array[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    int sum_primary = 0, sum_secondary = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum_primary += array[i][j];
            }

            if (i + j == n - 1)
            {
                sum_secondary += array[i][j];
            }
        }
    }

    if (sum_primary > sum_secondary)
    {
        printf("%d\n", sum_primary - sum_secondary);
    }
    else
    {
        printf("%d\n", sum_secondary - sum_primary);
    }

    return 0;
}