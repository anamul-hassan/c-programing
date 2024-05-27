#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];

    int min = 100000, max = -100000;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > max)
        {
            max = a[i];
        }

        if (a[i] < min)
        {
            min = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {

        if (a[i] == max)
        {
            a[i] = min;
        }
        else if (a[i] == min)
        {
            a[i] = max;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}