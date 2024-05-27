#include <stdio.h>
#include <string.h>
int main()
{

    char a[200], b[100];
    scanf("%s %s", a, b);

    // LOGIC
    // int k = strlen(a);
    // for (int i = 0; i <= 2; i++)
    // {
    //     a[k++] = b[i];
    // }
    // a[k] = '\0';

    // BUILD IN FUNCTION
    strcat(a, b);

    printf("%s", a);

    return 0;
}