#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    fgets(a, 100, stdin);

    int length_count = 0;

    for (int i = 0; a[i] != '\0'; i++)
    {
        length_count++;
    }

    printf("%d", strlen(a));

    return 0;
}