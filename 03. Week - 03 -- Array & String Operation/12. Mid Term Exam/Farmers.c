#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int str[4];

        for (
            int j = 0; j < 3; j++)
        {
            scanf("%d", &str[j]);
        }

        long long int ans = str[2] - str[0] * str[2] / (str[0] + str[1]);

        printf("%d\n", ans);
    }

    return 0;
}