#include <iostream>
using namespace std;
bool search(int matrix[][4], int n, int m, int key)
{
    int i = 0, j = m - 1; // start from top-right corner
    while (i < n && j >= 0)
    {
        if (matrix[i][j] == key)
        {
            cout << "Element found at (" << i << ", " << j << ")" << endl;
            return true;
        }
        else if (matrix[i][j] > key)
        {
            // if current element is greater than key, move left.
            j--;
        }
        else
        { // if current element is less than key, move down.
            i++;
        }
    }
    cout << "Element not found" << endl;
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    int n = 4, m = 4;
    int key = 10;
    search(matrix, n, m, key);

    return 0;
}