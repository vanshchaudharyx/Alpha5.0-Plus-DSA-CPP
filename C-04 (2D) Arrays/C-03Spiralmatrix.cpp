#include <iostream>
using namespace std;
void spiralMatrix(int matrix[][4], int n, int m)
{
    int srow = 0;     // starting row
    int erow = n - 1; // ending row
    int scol = 0;     // starting column
    int ecol = m - 1; // ending column
    while (srow <= erow && scol <= ecol)

    { // top
        for (int j = scol; j <= ecol; j++)
        {
            cout << matrix[srow][j] << " ";
        }

        // right
        for (int i = srow + 1; i <= erow; i++)
        {
            cout << matrix[i][ecol] << " ";
        }

        // bottom
        for (int j = ecol - 1; j >= scol; j--)
        {if (srow == erow) break; // to avoid printing the same row again
            cout << matrix[erow][j] << " ";
        }

        // left
        for (int i = erow - 1; i > srow; i--)
        {
            cout << matrix[i][scol] << " ";
        }
        srow++;
        erow--;
        scol++;
        ecol--;
    }
    cout << endl;
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    int n = 4, m = 4;
    spiralMatrix(matrix, n, m);
    return 0;
}