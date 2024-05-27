#include <stdio.h>
#include <string.h>

char func(char str[])
{
    int len = strlen(str);
    printf("%d\n", len);
    printf("%s\n", str);
}
int main()
{
    char str[20] = "Anamul";
    func(str);

    return 0;
}