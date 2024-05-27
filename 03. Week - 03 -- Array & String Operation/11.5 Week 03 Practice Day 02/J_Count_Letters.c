#include <stdio.h>
#include <string.h>
int main()
{

    char str[10000001];
    int count[26] = {0};

    scanf("%10000000s", str);

    int str_len = strlen(str);
    for (int i = 0; i < str_len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}