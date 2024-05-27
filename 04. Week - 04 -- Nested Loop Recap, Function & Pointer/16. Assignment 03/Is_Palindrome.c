#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
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
    return is_palindrome;
}

int main()
{
    char str[1001];
    scanf("%s", str);

    int value = is_palindrome(str);

    if (value == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}