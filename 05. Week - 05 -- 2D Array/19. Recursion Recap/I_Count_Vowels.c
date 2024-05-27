#include <stdio.h>
#include <string.h>

int count_vowel(char str[], int i)
{
    // base case
    if (str[i] == '\0')
    {
        return 0;
    }

    int count = count_vowel(str, i + 1);
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
        str[i] = str[i] + 32;
    }
    if (str[i] == 'a' ||
        str[i] == 'e' ||
        str[i] == 'i' ||
        str[i] == 'o' ||
        str[i] == 'u')
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}
int main()
{

    char str[205];

    fgets(str, 205, stdin);
    int count = count_vowel(str, 0);
    printf("%d\n", count);

    return 0;
}