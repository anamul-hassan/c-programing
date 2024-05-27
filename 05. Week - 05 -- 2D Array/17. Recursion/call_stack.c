#include <stdio.h>

void world()
{
    printf("World");
}
void hello()
{
    printf("Hello ");
    world();
}
int main()
{

    hello();

    return 0;
}