#include <stdio.h>

int main()
{
    int row, column;
    scanf("%d %d", &row, &column);

    int matrix[row][column];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int flag = 1;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            // check primary diagonal
            if (i == j && matrix[i][j] != 1)
            {
                flag = 0;
                break;
            }

            // check secondary diagonal
            if (i + j == column - 1 && matrix[i][j] != 1)
            {
                flag = 0;
                break;
            }

            // check rest for zero
            if (i != j && i + j != column - 1 && matrix[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
