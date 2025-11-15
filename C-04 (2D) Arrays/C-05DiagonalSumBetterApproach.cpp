#include <iostream>
using namespace std;
int diagonalsum(int matrix[][3], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + matrix[i][i];
        if (i != n - i - 1)
        {
            sum = sum + matrix[i][n - i - 1];
        }
    }
    cout << "Sum of diagonals: " << sum << endl;
}

int main()
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    int n = 3, m = 3;
    diagonalsum(matrix, n);
    return 0;
}