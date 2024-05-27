#include <stdio.h>

void func(int i)
{
    if (i == 101)
        return;
    func(i + 1);
    printf("%d ", i);
}

int main()
{
    func(1);

    return 0;
}