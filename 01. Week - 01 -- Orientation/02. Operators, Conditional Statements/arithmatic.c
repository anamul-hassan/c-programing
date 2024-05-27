#include <stdio.h>
int main()
{

    int a = 3, b = 20;

    int sum = a + b;

    int minus = a - b;

    int multiply = a * b;

    int mod = a % b;

    float division = b / a * 1.0;

    printf("%d \n", sum);
    printf("%d \n", minus);
    printf("%d \n", multiply);
    printf("%f \n", division);
    printf("%d \n", mod);

    return 0;
}