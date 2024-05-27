#include <stdio.h>
int main()
{
    int array[5] = {10, 20, 30, 40, 50};

    // printf("Oth index er address: %p\n", &array[0]);
    // printf("array er address: %p\n", array);

    // printf("0th index er value: %d\n", array[0]);
    // printf("0th index er value: %d\n", *(array + 2));

    printf("1th index er value: %d\n", *(array + 1));
    printf("1th index er value: %d\n", *(1 + array));
    printf("1th index er value: %d\n", array[1]);  // array[1] -> *(array + 1)
    printf("1th index er value: %d\n", 1 [array]); // 1 [array] -> *(1 + array)

    return 0;
}