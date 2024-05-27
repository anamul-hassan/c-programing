#include <stdio.h>
long long int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    long long int ans = factorial(n - 1);
    return ans * n;
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int ans = factorial(n);
    printf("%lld", ans);
    return 0;
}