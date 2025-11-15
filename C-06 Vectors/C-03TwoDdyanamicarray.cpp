#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;
    int **matrix = new int*[rows]; 
    for (int i = 0; i < rows; i++)
    
    {
        matrix[i] = new int[columns];
    }
    // Data Storage
    int x = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = x++;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}