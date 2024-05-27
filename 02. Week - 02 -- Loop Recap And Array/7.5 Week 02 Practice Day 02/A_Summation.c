#include <stdio.h>
int main()
{

    int n;
    scanf("%d\n", &n);

    int a[n];
    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &a[i]);
        sum += a[i];
    }
    if (sum > 0)
    {
        printf("%lld\n", sum);
    }
    else
    {
        printf("%lld\n", -sum);
    }

    return 0;
}
