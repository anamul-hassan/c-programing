#include <stdio.h>
int min_max(int *array, int size)
{
    int min = 100000;
    int max = -100000;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }

        if (array[i] < min)
        {
            min = array[i];
        }
    }

    printf("%d %d", min, max);
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

    min_max(array, n);

    return 0;
}