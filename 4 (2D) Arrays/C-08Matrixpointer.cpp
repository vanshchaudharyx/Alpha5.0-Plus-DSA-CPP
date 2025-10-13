#include <iostream>

using namespace std;
void func(int matrix[][4], int n, int m)
{
    cout << *(*(matrix + 1) + 1) << "=" << matrix[1][1] << endl; // prints the address of the second row and second column of the array
}

int main()
{
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    int n = 4, m = 4;
    cout << matrix << "=" << &matrix[0][0] << endl;     // prints the address of the first element of the array
    cout << matrix + 1 << "=" << &matrix[1][0] << endl; // prints the address of the second row of the array
    func(matrix, n, m);                                 // prints the address of the second row and second column of the array
    return 0;
}