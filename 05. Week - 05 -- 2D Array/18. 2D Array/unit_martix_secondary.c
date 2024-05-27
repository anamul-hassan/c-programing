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

    int flag = 1;

    if (column != row)
    {
        flag = 0;
    }

    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {

            if (i + j != row - 1)
            {
                if (array[i][j] != 0)
                {
                    flag = 0;
                }
            }
            else
            {
                if (array[i][j] != 1)
                {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("Unit Matrix Secondary\n");
    }
    else
    {
        printf("Not Unit Matrix Secondary\n");
    }

    return 0;
}