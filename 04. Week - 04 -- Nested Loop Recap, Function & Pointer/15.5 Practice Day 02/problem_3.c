#include <stdio.h>

int count_odd(int array[], int n)
{
    int odd_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 != 0)
        {
            odd_count++;
        }
    }
    return odd_count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int value = count_odd(array, n);
    printf("%d", value);

    return 0;
}