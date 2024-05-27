#include <stdio.h>
int main()
{
    int column, row;
    scanf("%d %d", &column, &row);
    int array[column][row];
    int count = 0;

    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            scanf("%d", &array[i][j]);
            if (array[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (row * column == count)
    {
        printf("Zero Matrix");
    }
    else
    {
        printf("Not Zero Matrix");
    }

    return 0;
}