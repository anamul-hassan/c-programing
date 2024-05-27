#include <stdio.h>

int sum()
{
    int x, y;
    scanf("%d %d", &x, &y);
    return x + y;
}
int main()
{
    int z = sum();
    printf("%d", z);
    return 0;
}