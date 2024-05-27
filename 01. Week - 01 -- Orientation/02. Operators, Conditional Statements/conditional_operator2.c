#include <stdio.h>
int main()
{
    int tk;
    printf("Enter your amount: ");
    scanf("%d", &tk);

    if (tk >= 100)
    {
        printf("Burger khabo");
    }
    else if (tk >= 50)
    {
        printf("Fuchka khabo");
    }
    else if (tk >= 20)
    {
        printf("Ice Cream khabo");
    }
    else
    {
        printf("Khabo Na");
    }

    return 0;
}