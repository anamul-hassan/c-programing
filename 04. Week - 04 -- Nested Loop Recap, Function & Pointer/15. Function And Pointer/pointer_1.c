#include <stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;
    printf("%p \n", &x);
    printf("%d \n", *ptr);
    printf("%d \n", sizeof(*ptr));

    return 0;
}