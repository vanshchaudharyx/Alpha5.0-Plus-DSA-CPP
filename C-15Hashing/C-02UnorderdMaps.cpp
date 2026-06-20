#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    m["China"] = 150;
    m["India"] = 150;
    m["US"] = 50;
    m["Nepal"] = 10;

    cout << m["India"];

    for (pair<string, int> country : m)
    {
        cout << country.first << "," << country.second << endl;
    }

    // If count=1 the exists if count=0 then not exists.

    if (m.count("Nepal"))
    {
        cout << "Nepal Exists"<<endl;
    }
    else
    {
        cout << "Nepal doesnt Exists";
    }
    m.erase("Nepal");
    if (m.count("Nepal"))
    {
        cout << "Nepal Exists"<<endl;
    }
    else
    {
        cout << "Nepal doesnt Exists";
    }

    return 0;
}
