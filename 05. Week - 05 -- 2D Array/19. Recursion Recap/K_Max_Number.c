#include <stdio.h>
#include <limits.h>

int factorial(int array[], int n, int i)
{
    if (i == n)
    {
        return INT_MIN;
    }
    int max = factorial(array, n, i + 1);
    if (array[i] > max)
    {
        return array[i];
    }
    else
    {
        return max;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int max = factorial(array, n, 0);
    printf("%d", max);

    return 0;
}