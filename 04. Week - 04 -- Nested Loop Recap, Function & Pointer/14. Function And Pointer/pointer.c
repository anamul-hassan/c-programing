#include <stdio.h>
int main()
{
    int x = 11;
    printf("Address of X => %p\n", &x);
    int *p = &x;
    printf("Address of X => %d\n", *p);

    *p = 100;
    printf("%d", x);

    return 0;
}