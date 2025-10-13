#include <iostream>
using namespace std;
int search(int matrix[][4], int n, int m, int key)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == key)
                cout << "Element found at (" << i << "," << j << ")" << endl;
        }
    }
    cout << "Element not found";
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    int n = 4, m = 4;
    int key = 12;
    search(matrix, n, m, key);

    return 0;
}