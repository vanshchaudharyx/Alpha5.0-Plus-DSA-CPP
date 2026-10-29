#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    // Unordered map used more frequently in DSA.
    unordered_map<string, int> m; // Duplicate values are not allowed
    m.emplace("TV", 100);
    m.emplace("Camera", 70);
    m.emplace("Phone", 40);
    m.emplace("Laptop", 10);
    for (auto p : m)
    {
        cout << p.first << "," << p.second << endl;
    }

    // Time complexity of insert,erase,count is O(1).
    return 0;
}