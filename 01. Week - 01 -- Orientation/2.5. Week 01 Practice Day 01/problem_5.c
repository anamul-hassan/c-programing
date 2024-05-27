#include <stdio.h>
int main()
{

    int a;
    scanf("%d", &a);

    if (a >= 20000)
    {
        if (a >= 10000 && a <= 20000)
        {
            printf("Gucci Bag");
        }
        else
        {
            printf("Gucci Bag\nGucci Belt");
        }
    }
    else if (a >= 5000)
    {
        printf("Levis Bag");
    }
    else
    {
        printf("Something will buy from New Market");
    }
    return 0;
}