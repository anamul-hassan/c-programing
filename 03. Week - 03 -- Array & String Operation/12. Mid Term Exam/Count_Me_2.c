#include <stdio.h>
#include <string.h>
int main()
{

    char str[100001];
    scanf("%s", str);
    int consonant_count = 0;

    int str_len = strlen(str);

    for (int i = 0; i < str_len; i++)
    {
        if (str[i] != 'a' &&
            str[i] != 'e' &&
            str[i] != 'i' &&
            str[i] != 'o' &&
            str[i] != 'u')
        {
            consonant_count += 1;
        }
    }

    printf("%d", consonant_count);

    return 0;
}