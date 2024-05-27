#include <stdio.h>

void print(int num)
{
    if (num == 0)
        return;
    int x = num % 10;
    print(num / 10);
    printf("%d ", x);
}

int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int num;
        scanf("%d", &num);
        print(num);
        if (num == 0)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}