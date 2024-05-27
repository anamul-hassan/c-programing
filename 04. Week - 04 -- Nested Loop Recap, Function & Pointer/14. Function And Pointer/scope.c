#include <stdio.h>
int x = 50;

int sum()
{
    // int x = 10;
    printf("sum x address-> %p\n", &x);
}
int main()
{
    sum();

    // int x = 20;
    printf("main x address-> %p\n", &x);

    return 0;
}