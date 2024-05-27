

#include <stdio.h>

long long int sum(int array[], int n)
{
    if (n == 0)
        return array[0];
    int element = array[n] + sum(array, n - 1);
    return element;
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

    printf("%lld", sum(array, n - 1));
    return 0;
}
