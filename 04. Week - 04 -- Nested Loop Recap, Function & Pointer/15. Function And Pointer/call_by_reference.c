#include <stdio.h>

int func(int *p)
{
    *p = 500;
}
int main()
{

    int x = 100;

    printf("main x er address %p\n", &x);
    printf("value of x %d \n", x);
    func(&x);
    printf("value of x %d \n", x);
    return 0;
}