#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);

            if (i > n)
            {
                break;
            }
        }
    }
    return 0;
}
