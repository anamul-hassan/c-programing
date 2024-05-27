#include <stdio.h>
int main()
{

    int row, column;
    scanf("%d %d", &row, &column);
    int array[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < column; i++)
    {
        printf("%d ", array[row - 1][i]);
    }
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        printf("%d ", array[i][column - 1]);
    }

    return 0;
}