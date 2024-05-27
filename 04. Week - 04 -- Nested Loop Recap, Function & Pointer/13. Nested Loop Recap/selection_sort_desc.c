#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int str[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &str[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] < str[j])
            {
                int tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", str[i]);
    }
    return 0;
}