#include <stdio.h>
int main()
{

    int n, div_count_two = 0, div_count_three = 0;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            div_count_two += 1;
        }

        else if (a[i] % 3 == 0)
        {
            div_count_three += 1;
        }
    }

    printf("%d %d\n", div_count_two, div_count_three);

    return 0;
}