#include <stdio.h>
int main()
{

    int test_case;
    scanf("%d", &test_case);

    for (int i = 0; i < test_case; i++)
    {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        long long int multiply_abc = a * b * c;
        long long int result = m / multiply_abc;

        if (m % multiply_abc == 0)
        {
            printf("%lld\n", result);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}