#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char a[n];
    scanf("%s", a);
    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int value = a[i] - 48;
        sum += value;
    }

    printf("%lld", sum);

    return 0;
}