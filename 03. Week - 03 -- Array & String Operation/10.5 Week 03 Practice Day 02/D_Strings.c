#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];

    scanf("%10s\n", a);
    scanf("%10s\n", b);

    printf("%d %d\n", strlen(a), strlen(b));
    printf("%s%s\n", a, b);

    char temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s", a, b);

    return 0;
}