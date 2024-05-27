#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num_array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num_array[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num_array[i] > num_array[j])
            {
                int temp = num_array[i];
                num_array[i] = num_array[j];
                num_array[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", num_array[i]);
    }

    return 0;
}