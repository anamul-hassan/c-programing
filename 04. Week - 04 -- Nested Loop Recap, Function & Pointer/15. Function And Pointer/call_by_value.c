#include <stdio.h>

int func(int x)
{
    printf("%p func x\n", &x);
    x = 100;
    printf("%d func x value\n", x);
}

int main()
{
    int x = 10;
    func(x);
    printf("%p main x\n", &x);
    printf("%d main x value\n", x);
    return 0;
}