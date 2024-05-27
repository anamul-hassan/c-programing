#include <stdio.h>
int main()
{
    int n, x;
    scanf("%d", &n);
    int s[n];
    int is_summable = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }
    scanf("%d", &x);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] + s[j] == x)
            {
                is_summable = 1;
            }
        }
    }

    if (is_summable == 0)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }

    return 0;
}