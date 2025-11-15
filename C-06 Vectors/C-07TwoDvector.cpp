#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < matrix.size(); i++) // This loop is for rows
    {
        for (int j = 0; j < matrix[i].size(); j++) // This loop is for columns
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // we can also print different coloumns of different rows
    vector<vector<int>> matrix2 = {{1, 2, 3}, {4, 5}, {7}};
    for (int i = 0; i < matrix2.size(); i++) // This loop is for rows
    {
        for (int j = 0; j < matrix2[i].size(); j++) // This loop is for columns
        {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // Practice Q.
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(i);
    }
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    return 0;
}