#include <stdio.h>
int main()
{
    int column, row;
    scanf("%d %d", &column, &row);
    int array[column][row];

    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    int e = 3;
    for (int i = 0; i < column; i++)
    {
        printf("%d\n", array[i][e]);
    }

    return 0;
}