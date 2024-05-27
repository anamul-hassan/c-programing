#include <stdio.h>
void func(int i)
{
    if (i == 0)
        return;
    printf("%d ", i);
    func(i - 1);
}

int main()
{
    func(5);

    return 0;
}