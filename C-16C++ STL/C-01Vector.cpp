// When we want a dyanamic array then we use vectors
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    cout << "Size of vector is:" << vec.size() << endl;
    // Vector Functions
    vec.push_back(1); // Add elements to the last.
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    // We also do this->
    // vector <int> vec={1,2,3,4,5};

    cout << "Size of vector is:" << vec.size() << endl;
    cout << "Capacity of vector is:" << vec.capacity() << endl;
    // Capacity is how much element vector can hold.

    // Print all elements of vector.
    for (int val : vec)
    {
        cout << val << " ";
    }
    // Pop_back- Delete element from last.

    // Accessing elements in vector.
    // cout<<vec[1]; Prints element at 0th index.
    // cout << vec.at(2); //Alternate method to access a value at index.

    // Front and back function.
    cout << vec.front() << " " << vec.back();

    // If we want to initialize the vec2 from vec 1 element then->
    // vector<int> vec2(vec);
    // cout << vec2[2];

    // More methods of vector.
    //  Erase- In erase we delete a value based on the position.
    //  For passing position we use iterator.
    vec.erase(vec.begin()); // We can move vec.begin() by using vec.begin()+1
    // Erase reduces size but capacity is as it is.[Same for clear function]
    // Print all elements of vector.
    cout << endl;
    for (int val : vec)
    {
        cout << val << " ";
    }
    // We can also do--
    // vec.erase(start,end); It delete the elements b/w start and end.

    // Insert Function - This insert the element at specific position.
    //   vec.insert(vec.begin()+2,10);This insert the value at third postion in the vector.

    // Clear function- Delete all elements of elements but capacity is same.
    // Empty function. vec.empty()

    return 0;
}
