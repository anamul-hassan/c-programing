#include <stdio.h>
#include <string.h>
int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        char str[10001];
        int capital_count = 0, small_count = 0, digit_count = 0;
        scanf("%s", str);

        for (int j = 0; j < strlen(str); j++)
        {
            if (str[j] >= 'a' && str[j] <= 'z')
            {
                small_count += 1;
            }
            else if (str[j] >= 'A' && str[j] <= 'Z')
            {
                capital_count += 1;
            }
            else if (str[j] >= '0' && str[j] <= '9')
            {
                digit_count += 1;
            }
        }
        printf("%d %d %d\n", capital_count, small_count, digit_count);
    }

    return 0;
}