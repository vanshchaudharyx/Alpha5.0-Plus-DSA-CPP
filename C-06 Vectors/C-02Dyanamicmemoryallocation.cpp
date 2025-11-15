#include <iostream>
using namespace std;
void func(){
    int arr[100] = {1, 2, 3, 4, 5}; 
    // this is static memory allocation.
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

int main() {
   func();
  //  cout<<arr[0]<<endl; // This will give an error because arr is not in scope here.
    return 0;
} 