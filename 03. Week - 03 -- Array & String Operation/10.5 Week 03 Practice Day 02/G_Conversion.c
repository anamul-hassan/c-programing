#include <stdio.h>
#include <string.h>
int main()
{
    char str[100001];

    fgets(str, 100001, stdin);

    int str_length = strlen(str);
    if (str[str_length - 1] == '\n')
    {
        str[str_length - 1] = '\0';
        str_length--;
    }

    for (int i = 0; i < str_length; i++)
    {

        if (str[i] == ',')
        {
            str[i] = ' ';
        }

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    printf("%s", str);

    return 0;
}