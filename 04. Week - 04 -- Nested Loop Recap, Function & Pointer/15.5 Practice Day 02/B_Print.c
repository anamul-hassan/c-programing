#include <stdio.h>

void print_numbers(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", i + 1);
        if (i < n - 1)
        {
            printf(" ");
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print_numbers(n);
    return 0;
}