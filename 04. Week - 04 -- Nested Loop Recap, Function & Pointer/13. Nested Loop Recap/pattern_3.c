#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1, star = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = space; j > 0; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        space--;
        star += 2;
        printf("\n");
    }
    return 0;
}