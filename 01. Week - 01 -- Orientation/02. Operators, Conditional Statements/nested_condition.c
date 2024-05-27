#include <stdio.h>
int main()
{

    int tk;
    printf("Enter your amount: ");

    scanf("%d", &tk);

    if (tk >= 5000)
    {
        printf("Cox Bazar Jabo \n");
        if (tk - 5000 >= 10000)
        {
            printf("Saint Martin Jabo \n");
        }
        else
        {
            printf("Bari fire asbo\n");
        }
    }
    else
    {
        printf("Kothaw jabo na \n");
    }

    return 0;
}