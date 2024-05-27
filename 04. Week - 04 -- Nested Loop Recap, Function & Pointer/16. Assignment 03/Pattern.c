#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = n - 1;
    int hash = 1, space = n - 1;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < hash; j++)
        {
            if (i % 2 != 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        space--;
        hash += 2;
        printf("\n");
    }

    space = 0;
    count = n;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < hash; j++)
        {
            if (n % 2 == 0)
            {
                if (i % 2 != 0)
                {
                    printf("#");
                }
                else
                {
                    printf("-");
                }
            }
            else
            {
                if (i % 2 != 0)
                {
                    printf("-");
                }
                else
                {
                    printf("#");
                }
            }
        }
        space++;
        hash -= 2;
        printf("\n");
    }

    return 0;
}