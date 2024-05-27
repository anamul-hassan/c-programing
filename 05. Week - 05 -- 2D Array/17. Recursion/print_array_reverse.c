#include <stdio.h>

void func(int a[], int n, int i)
{

    printf("%d ", a[i]);
    if (i == 0)
        return;
    func(a, n, i - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    func(a, n, n - 1);

    return 0;
}