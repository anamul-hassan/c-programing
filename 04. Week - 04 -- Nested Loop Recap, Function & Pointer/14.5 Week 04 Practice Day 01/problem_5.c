#include <stdio.h>

char capital_to_small(char x)
{
    char value = x + ('a' - 'A');
    return value;
}
int main()
{
    char a;
    scanf("%c", &a);
    char value = capital_to_small(a);
    printf("%c", value);
    return 0;
}