#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);
    int firstNumber = n / 10 % 10;
    int lastNumber = n % 10;

    if (lastNumber % firstNumber == 0 ||
        firstNumber % lastNumber == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}