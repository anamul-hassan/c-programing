#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = 0;
    int star = n * 2 - 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        space++;
        star -= 2;
        printf("\n");
    }

    return 0;
}