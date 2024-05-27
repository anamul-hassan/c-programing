#include <stdio.h>
int main()
{

    int tk;
    printf("Write your amount: ");
    scanf("%d", &tk);

    if (tk >= 100)
    {
        printf("Burger Khabo %d", tk);
    }
    else
    {
        printf("Khabo Na %d", tk);
    }

    return 0;
}