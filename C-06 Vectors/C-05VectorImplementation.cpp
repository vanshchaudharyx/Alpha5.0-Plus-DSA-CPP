#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector = {1, 2, 3, 4};
    cout << vector.size() << endl;                     // 4
    cout << "Capacity: " << vector.capacity() << endl; // 4
    vector.push_back(5);                               // Add 5 to the end of the vector
    cout << vector.size() << endl;                     // 5
    cout << "Capacity: " << vector.capacity() << endl; // 8
    // We can also delete last element of the vector using pop_back()
    vector.pop_back(); // Remove last element (5)
    cout << vector.size() << endl;                     // 4
    return 0;
}  