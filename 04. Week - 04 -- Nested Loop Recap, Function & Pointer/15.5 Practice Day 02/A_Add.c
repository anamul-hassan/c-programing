#include <stdio.h>

int sum(int a, int b)
{
    long long int value = a + b;
    return value;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", sum(a, b));

    return 0;
}