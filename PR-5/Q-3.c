#include <stdio.h>
#define pf printf

int main()
{
    int row, col;
    pf("Enter row : ");
    scanf("%d", &row);
    pf("Enter column : ");
    scanf("%d", &col);

    int a[row][col];

    pf("\n Array input \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        pf("\n");
    }

    pf("\n Array output \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("%d ", a[j][i]);
        }
        pf("\n");
    }

}
