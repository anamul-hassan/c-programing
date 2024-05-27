#include <stdio.h>

int char_to_ascii(char x)
{
    int value = x;
    return value;
}
int main()
{

    char a;
    scanf("%c", &a);
    int value = char_to_ascii(a);
    printf("%d", value);
    return 0;
}