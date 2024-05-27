#include <stdio.h>

// int sum_of_array(int array[], int size)    // way no 1
int sum_of_array(int *array, int size) // way no 2
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
}
int main()
{

    int array[3] = {10, 20, 30};
    sum_of_array(array, 3);

    return 0;
}