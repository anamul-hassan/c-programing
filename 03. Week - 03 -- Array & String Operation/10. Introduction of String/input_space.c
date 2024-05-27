#include <stdio.h>
#include <string.h>
int main()
{

    char a[15];

    // gets(a);
    fgets(a, 15, stdin);

    printf("%s", a);

    return 0;
}