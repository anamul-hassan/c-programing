#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int max = 0;

    // Read the input array and find the maximum value
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (max < a[i])
        {
            max = a[i];
        }
    }

    // Create an array for counting occurrences, initialized to 0
    int count[max + 1];
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }

    // Count occurrences of each number
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }

    // Display the counts for each index from 0 to max
    for (int i = 0; i <= max; i++)
    {
        printf("%d => %d\n", i, count[i]);
    }

    return 0;
}
