#include <iostream>
#include <map>
using namespace std;
int main()
{
    // We store key value pairs in map.Keys are always unique.
    map<string, int> m;
    // For inserting the value or change the values.
    // m[key]=value;
    m["tv"] = 100;
    m["phone"] = 10;
    m["laptop"] = 20;
    m["headphones"] = 50;
    m.insert({"camera", 25});
    m.emplace("mouse", 45);
    // This data is a pair kind of data.
    for (auto p : m)
    {
        cout << "(" << p.first << "," << p.second << ")" << endl;
        // These all elements prints in sorted of by their keys.
        // So the map sorts the  data in ascending order.
    }

    cout << m.count("laptop");   // It return the number of count of instances associated with a key.
    cout << m["laptop"] << endl; // Prints the value of key.

    // Erase method
    // m.erase["key"];

    // find- If found then return iterator of that value,if not then we get m.end()

    if (m.find("camera") != m.end())
    {
        cout << "found";
    }
    else
    {
        cout << "Not found";
    }
    // Size,empty

    // Multi Map- In this map we store multiple keys with same name.
    // for multimap only emplace works.

    // If we use m.erase(key); This deletes all the keys with same name.
    // So we have to pass the iterator

    // m.erase(m.find('tv'));

    return 0;
}