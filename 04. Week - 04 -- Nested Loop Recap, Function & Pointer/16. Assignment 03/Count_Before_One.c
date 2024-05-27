#include <stdio.h>
int count_before_one(int array[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 1)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    return count;
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

    int value = count_before_one(array, n);

    printf("%d", value);

    return 0;
}