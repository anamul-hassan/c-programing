#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int a[n];

    long long int positive_sum = 0, negative_sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > 0)
        {
            positive_sum += a[i];
        }
        else if (a[i] < 0)
        {
            negative_sum += a[i];
        }
    }

    printf("%lld %lld", positive_sum, negative_sum);

    return 0;
}