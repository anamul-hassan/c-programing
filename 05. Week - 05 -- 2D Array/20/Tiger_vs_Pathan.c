#include <stdio.h>
#include <string.h>
int main()
{
    int test_case;
    scanf("%d", &test_case);

    for (int i = 0; i < test_case; i++)
    {
        int str_len;
        scanf("%d", &str_len);
        char str[str_len + 1];
        scanf("%s", str);
        int p_count = 0, t_count = 0;

        for (int j = 0; j < str_len + 1; j++)
        {
            if (str[j] == 'T')
            {
                t_count++;
            }
            else if (str[j] == 'P')
            {
                p_count++;
            }
        }

        if (p_count > t_count)
        {
            printf("Pathaan\n");
        }
        else if (p_count < t_count)
        {
            printf("Tiger\n");
        }
        else if (p_count == t_count)
        {
            printf("Draw\n");
        }
    }

    return 0;
}