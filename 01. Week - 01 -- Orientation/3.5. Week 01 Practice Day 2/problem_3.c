#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("I Love Practice\n");
        if (i > n)
        {
            break;
        }
    }
    return 0;
}