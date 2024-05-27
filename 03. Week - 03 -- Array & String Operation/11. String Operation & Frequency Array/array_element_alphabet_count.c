#include <stdio.h>
#include <string.h>
int main()
{

    char str[100000];
    scanf("%s", str);

    int count[26] = {0};

    for (int i = 0; i < strlen(str); i++)
    {
        count[str[i] - 'a']++;
    }

    for (int i = 0; i < strlen(str); i++)
    {
        if (count[i] != 0)
        {
            printf("%c -> %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}