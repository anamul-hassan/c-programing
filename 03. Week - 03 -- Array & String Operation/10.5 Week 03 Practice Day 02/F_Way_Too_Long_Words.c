#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[101];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", &str);

        int str_length = strlen(str);

        if (str_length > 10)
        {
            printf("%c%d%c\n", str[0], str_length - 2, str[str_length - 1]);
        }
        else
        {
            printf("%s\n", str);
        }
    }
    return 0;
}
