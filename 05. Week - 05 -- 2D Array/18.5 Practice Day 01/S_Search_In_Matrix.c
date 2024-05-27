#include <stdio.h>
int main()
{
    int row, column, x;
    scanf("%d %d", &row, &column);
    int array[column][row];

    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    scanf("%d", &x);
    int flag = 0;

    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (array[i][j] == x)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("will not take number\n");
    }
    else
    {
        printf("will take number\n");
    }

    return 0;
}