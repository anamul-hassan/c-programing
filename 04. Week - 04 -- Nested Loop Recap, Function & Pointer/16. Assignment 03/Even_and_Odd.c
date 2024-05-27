#include <stdio.h>

void odd_even()
{

    int n;
    scanf("%d", &n);
    int array[n];
    int even_counter = 0, odd_counter = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            even_counter++;
        }

        if (array[i] % 2 != 0)
        {
            odd_counter++;
        }
    }
    printf("%d %d", even_counter, odd_counter);
}

int main()
{

    odd_even();

    return 0;
}