#include <stdio.h>
int main()
{
    int row, column;
    scanf("%d %d", &row, &column);
    int arrayA[row][column];
    int arrayB[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arrayA[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arrayB[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arrayA[i][j] + arrayB[i][j]);
        }
        printf("\n");
    }

    return 0;
}