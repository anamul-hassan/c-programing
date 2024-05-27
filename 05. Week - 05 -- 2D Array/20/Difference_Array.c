#include <stdio.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);
    for (int i = 0; i < test_case; i++)
    {
        int n;
        scanf("%d", &n);
        int array_a[n];

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array_a[j]);
        }
        // copy the array
        int array_b[n];
        for (int j = 0; j < n; j++)
        {
            array_b[j] = array_a[j];
        }
        // sort the array --ascending order
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (array_b[j] > array_b[k])
                {
                    int temp = array_b[j];
                    array_b[j] = array_b[k];
                    array_b[k] = temp;
                }
            }
        }

        for (int j = 0; j < n; j++)
        {
            int num = (array_a[j] - array_b[j]);
            if (num >= 0)
            {
                printf("%d ", num);
            }
            else
            {
                printf("%d ", num * -1);
            }
        }
        printf("\n");
    }

    return 0;
}