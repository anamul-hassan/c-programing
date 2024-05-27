#include <stdio.h>
#include <string.h>
int main()
{

    char str[1001];
    scanf("%1000s", str);
    int is_palindrome = 1;

    int str_length = strlen(str);

    for (int i = 0; i < str_length / 2; i++)
    {
        int j = str_length - 1 - i;
        if (str[i] != str[j])
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}