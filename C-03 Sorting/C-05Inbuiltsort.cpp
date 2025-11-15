#include <iostream>
#include <algorithm> // Include the algorithm header for the sort function
using namespace std;
 // Sort array by default in ascending order.
int main() {
   int arr[] = {1,4,1,3,2,4,3,7};
   sort(arr, arr + 8); // Sort the array using the built-in sort function
   for(int i = 0; i < 8; i++) {
       cout << arr[i] << " "; // Print the sorted array
   }
   // We also sort bw a specofic range of the array.
   // We can also sort in reverse order by using the greater<int>() function.
sort(arr, arr + 8, greater<int>()); // Sort the array in descending order
   cout << endl;
   for(int i = 0; i < 8; i++) {
       cout << arr[i] << " "; // Print the sorted array in descending order
   }
   return 0;
}