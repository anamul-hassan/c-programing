#include <stdio.h>

char small_to_capital(char x)
{
    char value = x - ('a' - 'A');
    return value;
}

int main()
{
    char a;
    scanf("%c", &a);

    char value = small_to_capital(a);

    printf("%c", value);

    return 0;
}