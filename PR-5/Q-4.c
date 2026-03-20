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
            pf("%d ", a[i][j]);
        }
        pf("\n");
    }

    int r, c, sum = 0;
    pf("Enter Row : ");
    scanf("%d", &r);
    pf("Element of Row %d is : ", r);
    for (int j = 0; j < col; j++)
    {
        pf("%d ", a[r][j]);
        sum += a[r][j];
    }
    pf("\n");
    pf("Sum of row %d is : %d\n", r, sum);


    sum = 0;
    pf("Enter Col : ");
    scanf("%d", &c);
    pf("Element of Column %d is : ", c);
    for (int i = 0; i < row; i++)
    {
        pf("%d ", a[i][c]);
        sum += a[i][c];
    }
    pf("\n");
    pf("Sum of column %d is : %d\n", c, sum);
}
