#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    int counter = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = counter; j > 0; j--)
        {
            printf("%d", j);
        }
        counter++;
        space--;
        printf("\n");
    }

    return 0;
}