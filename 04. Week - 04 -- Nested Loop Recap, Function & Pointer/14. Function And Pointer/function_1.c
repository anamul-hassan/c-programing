#include <stdio.h>

// int sum(int x, int y)
// {
//     return x + y;
// }

int sum(int x, int y);
int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    printf("sum- %d\n", sum(x, y));

    return 0;
}

int sum(int x, int y)
{
    return x + y;
}
