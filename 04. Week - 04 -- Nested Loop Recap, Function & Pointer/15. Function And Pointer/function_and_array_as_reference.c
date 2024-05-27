#include <stdio.h>

void func(int array[], int size)
{
    array[0] = 500;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    func(array, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}