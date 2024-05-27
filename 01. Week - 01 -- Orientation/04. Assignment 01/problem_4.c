#include <stdio.h>
int main()
{

    long int n;

    scanf("%ld", &n);

    if (21 <= n && n <= 10000)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 7 == 0)
            {
                printf("%d\n", i);
            }
            if (i > n)
            {
                break;
            }
        }
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}