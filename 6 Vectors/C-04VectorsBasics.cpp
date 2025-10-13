#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1(10, -1); // 10 elements with value -1.

    cout << vec1.size() << endl; // 10
    for (int i = 1; i < vec1.size(); i++)
    {
        cout << vec1[i] << " ";
    }
    return 0;
}