#include <stdio.h>
#include <string.h>
int main()
{
    char str[10001];
    scanf("%s", str);
    int count[26];

    int str_len = strlen(str);

    for (int i = 0; i < str_len; i++)
    {
        count[str[i] - 'a'] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c - %d\n", i + 'a', count[i]);
        }
    }
    return 0;
}