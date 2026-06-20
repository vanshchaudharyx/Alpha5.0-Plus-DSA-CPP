#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(1);
    s.insert(3);
    cout << s.size();
    if (s.find(3) != s.end())
    {
        cout << "3 exists\n";
    }
    else
    {
        cout << "3 not exists";
    }
    for (auto el : s)
    {
        cout << el << endl;
    }
    return 0;
}