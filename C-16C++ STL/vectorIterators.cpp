#include <iostream>
#include <vector>
using namespace std;
int main()
{

    // vec.begin- return the location of memory where the vector is stored
    // vec.end- This doesn't point at the ending of the vector it points towards ending+1 location(garbage value).
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << *(vec.end()) << endl; // If we dereference that value then it points towards the garbage value.

    // We can create iterator of vector.
    vector<int>::iterator it; // In this line we define scope-> our iterator point which type of value that is integer.
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it);
    }

    // Backward loop using reverse iterator.
    vector<int> vec2 = {1, 2, 3, 4, 5};
    cout << *(vec2.end()) << endl;
    vector<int>::reverse_iterator itr;
    for (itr = vec2.rbegin(); itr != vec2.rend(); itr++)
    {
        cout << *(itr);
    }
    cout << endl;
    // In modern C++-
    cout << "In modern C++"<<endl;
    vector<int> vec3 = {1, 2, 3, 4, 5};
    for (auto itrr = vec3.rbegin(); itrr != vec3.rend(); itrr++)
    {
        cout << *(itrr);
    }

    return 0;
}